#include<iostream>
using namespace std;
int main(){
    int n,a=0,b=1,c;
    cout<<"enter number for how many times you want the fibonacci series-->";
    cin>>n;
    cout<<"fibonacci series:"<<a <<" "<<b;
    c=a+b;
    for (int i = 1; i <= n; i++)
    {
         cout<<" "<<c;
         a=b;
         b=c;
         c=a+b;
       
    }
    return 0;
    }
    
   
    