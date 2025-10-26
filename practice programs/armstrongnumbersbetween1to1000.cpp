#include <iostream>
using namespace std;
int main() {
    cout << "Armstrong numbers between 1 and 1000 are: ";
    for (int num = 1; num <= 1000; num++) {
        int sum = 0;
        int temp = num;
        int nodigit= 0;

    
        while (temp > 0){
            int rem = temp % 10;
            sum +=rem^3;
            temp /= 10;
        
        }

       
        
      
            

        // Check if the number is an Armstrong number
        if (sum == num) {
            cout << num << " ";
        }
    }
    return 0;
}
