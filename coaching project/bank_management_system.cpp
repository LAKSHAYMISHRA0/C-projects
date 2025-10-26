#include <iostream>
#include <fstream>
#include <string>
using namespace std;

const int MAX_ACCOUNTS = 100;

struct account {
    int account_number;
    string name;
    string password;
    double balance;
};

account accounts[MAX_ACCOUNTS];
int account_count = 0;
int starting_account = 1001;

void append_account_to_file(const account& acc) {
    ofstream file("accounts.dat", ios::binary | ios::app);
    if (file.is_open()) {
        file.write((char*)&acc.account_number, sizeof(acc.account_number));

        size_t name_len = acc.name.size();
        file.write((char*)&name_len, sizeof(name_len));
        file.write(acc.name.c_str(), name_len);

        size_t pass_len = acc.password.size();
        file.write((char*)&pass_len, sizeof(pass_len));
        file.write(acc.password.c_str(), pass_len);

        file.write((char*)&acc.balance, sizeof(acc.balance));
        file.close();
    }
}

void rewrite_all_accounts() {
    ofstream file("accounts.dat", ios::binary | ios::trunc);
    for (int i = 0; i < account_count; ++i) {
        file.write((char*)&accounts[i].account_number, sizeof(accounts[i].account_number));

        size_t name_len = accounts[i].name.size();
        file.write((char*)&name_len, sizeof(name_len));
        file.write(accounts[i].name.c_str(), name_len);

        size_t pass_len = accounts[i].password.size();
        file.write((char*)&pass_len, sizeof(pass_len));
        file.write(accounts[i].password.c_str(), pass_len);

        file.write((char*)&accounts[i].balance, sizeof(accounts[i].balance));
    }
    file.close();
}

void load_accounts() {
    ifstream file("accounts.dat", ios::binary);
    if (!file.is_open()) return;

    while (file.peek() != EOF && account_count < MAX_ACCOUNTS) {
        account acc;
        file.read((char*)&acc.account_number, sizeof(acc.account_number));

        size_t name_len;
        file.read((char*)&name_len, sizeof(name_len));
        acc.name.resize(name_len);
        file.read(&acc.name[0], name_len);

        size_t pass_len;
        file.read((char*)&pass_len, sizeof(pass_len));
        acc.password.resize(pass_len);
        file.read(&acc.password[0], pass_len);

        file.read((char*)&acc.balance, sizeof(acc.balance));

        accounts[account_count++] = acc;
        starting_account = max(starting_account, acc.account_number + 1);
    }

    file.close();
}

int find_account(int acc_no, const string& pass) {
    for (int i = 0; i < account_count; ++i) {
        if (accounts[i].account_number == acc_no && accounts[i].password == pass) {
            return i;
        }
    }
    return -1;
}

void create_account() {
    if (account_count >= MAX_ACCOUNTS) {
        cout << "Account limit reached!" << endl;
        return;
    }

    string name, password;
    double initial_deposit;

    cin.ignore();
    cout << "Enter your name: ";
    getline(cin, name);

    cout << "Enter initial deposit (min ₹1000): ";
    cin >> initial_deposit;
    if (initial_deposit < 1000) {
        cout << "Minimum deposit is ₹1000!" << endl;
        return;
    }

    cin.ignore();
    cout << "Set a password: ";
    getline(cin, password);

    account new_acc = {starting_account, name, password, initial_deposit};
    accounts[account_count++] = new_acc;
    append_account_to_file(new_acc);

    cout << "Account created! Your account number is: " << starting_account << endl;
    starting_account++;
}

void deposit() {
    int acc_no;
    string pass;
    double amount;

    cout << "Enter account number: ";
    cin >> acc_no;
    cin.ignore();
    cout << "Enter password: ";
    getline(cin, pass);

    int index = find_account(acc_no, pass);
    if (index == -1) {
        cout << "Invalid credentials!" << endl;
        return;
    }

    cout << "Enter amount to deposit: ";
    cin >> amount;
    accounts[index].balance += amount;
    cout << "Deposited ₹" << amount << ". New balance: ₹" << accounts[index].balance << endl;
    rewrite_all_accounts();
}

void withdraw() {
    int acc_no;
    string pass;
    double amount;

    cout << "Enter account number: ";
    cin >> acc_no;
    cin.ignore();
    cout << "Enter password: ";
    getline(cin, pass);

    int index = find_account(acc_no, pass);
    if (index == -1) {
        cout << "Invalid credentials!" << endl;
        return;
    }

    cout << "Enter amount to withdraw: ";
    cin >> amount;
    if (accounts[index].balance >= amount) {
        accounts[index].balance -= amount;
        cout << "Withdrawal successful. New balance: ₹" << accounts[index].balance << endl;
        rewrite_all_accounts();
    } else {
        cout << "Insufficient balance!" << endl;
    }
}

void check_balance() {
    int acc_no;
    string pass;

    cout << "Enter account number: ";
    cin >> acc_no;
    cin.ignore();
    cout << "Enter password: ";
    getline(cin, pass);

    int index = find_account(acc_no, pass);
    if (index == -1) {
        cout << "Invalid credentials!" << endl;
        return;
    }

    cout << "Current balance: ₹" << accounts[index].balance << endl;
}

void update_password() {
    int acc_no;
    string pass;

    cout << "Enter account number: ";
    cin >> acc_no;
    cin.ignore();
    cout << "Enter current password: ";
    getline(cin, pass);

    int index = find_account(acc_no, pass);
    if (index == -1) {
        cout << "Invalid credentials!" << endl;
        return;
    }

    string new_pass;
    cout << "Enter new password: ";
    getline(cin, new_pass);
    accounts[index].password = new_pass;
    cout << "Password updated successfully!" << endl;
    rewrite_all_accounts();
}

void close_account() {
    int acc_no;
    string pass;

    cout << "Enter account number to close: ";
    cin >> acc_no;
    cin.ignore();
    cout << "Enter password: ";
    getline(cin, pass);

    int index = find_account(acc_no, pass);
    if (index == -1) {
        cout << "Invalid credentials!" << endl;
        return;
    }

    for (int i = index; i < account_count - 1; ++i) {
        accounts[i] = accounts[i + 1];
    }
    account_count--;
    rewrite_all_accounts();
    cout << "Account closed successfully!" << endl;
}

void show_menu() {
    cout << "\n--- BANKING SYSTEM ---\n";
    cout << "1. Create Account\n";
    cout << "2. Deposit\n";
    cout << "3. Withdraw\n";
    cout << "4. Check Balance\n";
    cout << "5. Update Password\n";
    cout << "6. Close Account\n";
    cout << "7. Exit\n";
    cout << "Choose an option: ";
}

int main() {
    load_accounts();
    int choice;
    do {
        show_menu();
        cin >> choice;
        switch (choice) {
            case 1: create_account(); break;
            case 2: deposit(); break;
            case 3: withdraw(); break;
            case 4: check_balance(); break;
            case 5: update_password(); break;
            case 6: close_account(); break;
            case 7: cout << "Goodbye!" << endl; break;
            default: cout << "Invalid option!" << endl;
        }
    } while (choice != 7);

    return 0;
}
