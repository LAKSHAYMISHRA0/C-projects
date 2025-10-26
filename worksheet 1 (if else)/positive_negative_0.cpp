/* write a program to check whether the given number is positive ,neagtive or zero.*/
#include<iostream>
using namespace std;
int main(){
    int num;
    cout<<"enter the number -->";
    cin>>num;
    if (num==0)
    {
        cout<<"your number is zero"<<endl;
    }
    else if (num>0)
    {
        cout<<"your number is positive"<<endl;  
    }
    else
    {
        cout<<"your number is negative"<<endl;
    }
    return 0;
} 