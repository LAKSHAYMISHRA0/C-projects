#include<iostream>
using namespace std;
int main(){
    int num,i;
    bool isprime=true;
    cout<<"enter any number ---";
    cin>>num;
    for( i=2;i<num-1;i++){
        if(num%i==0){
            isprime=false;
         break;
        }

    }if(isprime==true)
    {
    cout<<"your number is a prime number";

    }
    else
    {
    cout<<"your number is a non prime number!!";
    }
    

}