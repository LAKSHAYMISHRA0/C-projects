#include <iostream>
using namespace std;

int main() {
    int N;
    int  count = 0,max=N;

    
for (int i = 2; i <= 10; ++i)
 {
    cout << "Enter the number: ";
    cin >> N;
        if (N > max) {
            max = N;
        }
    } 
    while (N>0)
    {
        if(max==N)
        count++;
    }
    
       
cout << "The maximum value is: " << max<< endl;
    cout << "The digit "  << " occurs " << count << " times." << endl;
    return 0;
}
