//draw a flowchart to read 10 three digit no. and count how many of them are armstrong
#include<iostream>
using namespace std;
int main(){
    int num;
    int rem=0,count=0;
    for(int i=1;i<=10;i++){
        cout<<"enter three digit number-->";
        cin>>num;
        int temp=num;
        int sum=0;
    while(num>0)
    {
        rem=num%10;
        sum=sum+rem*rem*rem;
        num/=10;
    }
    if (sum==temp)
    {
    count++;
    }
    }
    cout<<"armstrong quantity is -->"<<count<<endl;
    return 0;
}