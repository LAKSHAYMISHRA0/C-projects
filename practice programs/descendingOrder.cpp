#include <iostream>
using namespace std;

int main() {
    int prev, curr;
    bool isDescending = true;
    cout << "Enter numbers (end with 0): " << endl;
    cin >> prev;
    if (prev == 0) {
        cout << "No values entered." << endl;
        return 0;
    }
    while (isDescending) {
        cin >> curr;
        if (curr == 0) 
        break;
        if (curr >= prev) {
            isDescending = false;
        }
        prev = curr;
    }
    if (isDescending) {
        cout << "The sequence is in descending order." << endl;
    } else {
        cout << "The sequence is NOT in descending order." << endl;
    }
    return 0;
}
