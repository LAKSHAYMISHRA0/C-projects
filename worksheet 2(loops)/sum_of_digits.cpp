/*write a program which reads an integer number and calculates the sum of its digits*/
#include<iostream>
using namespace std;
int main(){
    int num,rem=0,sum=0;
    cout<<"enter a number --> ";
    cin>>num;
    if (num<0)
    {
        num=-(num);
    }
    // do
    // {
    //     rem=num%10;
    //     sum=sum+rem;
    //     num=num/10;
    // }
     while (num!=0){
        rem=num%10;
        sum=sum+rem;
        num=num/10;
     }
    cout<<"sum of digits of a given number is-->"<<sum;
    
}