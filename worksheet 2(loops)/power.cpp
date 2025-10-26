#include<iostream>
using namespace std;
int main(){
    int a,b;
    int pow=1;
    cout<<"enter the value of a-->";
    cin>>a;
    cout<<"enter the value of b-->";
    cin>>b;
    while (b>=1)
    {
        pow*=a;
        b=b-1;
    }
    cout<<pow;
}