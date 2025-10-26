#include <iostream>
using namespace std;

int main() {
    int num;
    int sum = 0;

    cout << "Enter numbers (0 to stop): " << endl;
    do {
        cin >> num;
        if (num < 0) {
            sum += num;
        }
    } while (num != 0);

    cout << "Sum of negative numbers: " << sum << endl;

    return 0;
}
