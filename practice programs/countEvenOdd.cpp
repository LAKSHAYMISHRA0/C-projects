        //draw a program to read 10 values & count how many of them are even & how many of them are odd
        #include <iostream>
        using namespace std;

        int main() {
            int arr[10], evenCount = 0, oddCount = 0;

            // Reading 10 values from the user
            cout << "Enter 10 numbers: ";
            for (int i = 0; i < 10; i++) {
                cin >> arr[i];
            }

            // Counting even and odd numbers
            for (int i = 0; i < 10; i++) {
                if (arr[i] % 2 == 0) {
                    evenCount++;
                } else {
                    oddCount++;
                }
            }

            // Displaying the results
            cout << "Total number of even numbers: " << evenCount << endl;
            cout << "Total number of odd numbers: " << oddCount << endl;

            return 0;
        }
