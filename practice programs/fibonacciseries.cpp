#include<iostream>
using namespace std;
int fibonacci(int n){
    int a,b,c;
    if (n>0)
    {
        c=a+b;
        a=b;
        b=c;
        cout<<c<<"";
        fibonacci(n-1);
    }
    
}
int main(){
    int n;
    cout<<"enter the number of elements-->"<<endl;
    cin>>n;
    cout<<"fibonacci series:";
    cout<<"0"<<"1";
    fibonacci(n-2);
    return 0;
}