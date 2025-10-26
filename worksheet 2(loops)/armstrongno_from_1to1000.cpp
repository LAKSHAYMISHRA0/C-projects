
#include<iostream>
#include<math.h>
using namespace std;
int main(){
    int num;
    int sum,rem;
    for (int i= 1; i<=1000; i++)
    {
    num=i;
    if (num<=9)
    {
    cout<<" "<<num;
    }
    else{
        rem=num%10;
        int rem1=num%100;
        int rem2=num%1000;
    sum=pow(rem,3)+ pow((rem1-rem)/10,3)+pow((rem2-rem1)/100,3);
    if(sum==i)
    {
    cout<<" "<<num;
    }
    }
  }
}