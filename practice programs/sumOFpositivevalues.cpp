//draw a program to read 10 values & display the sum of positive values .
#include <iostream>
using namespace std;

int main() {
    int n=10,sum=0,pcount=0,ncount=0;

    // Reading 10 values from the user
    cout << "Enter 10 numbers: ";
    for (int i = 0; i < 10; i++) {
        cin >> n;
    }

    for (int i = 0; i < 10; i++)
    {
        if (n>0)
        {
            
            sum+=n;
            pcount++;
        }else{
            ncount++;
        }
        
    }
    cout<<sum;
    
    
  

    return 0;
}
