//draw a flowchart to read 10 three digit no. and count how many of them are armstrong
#include<iostream>
using namespace std;
int main(){
    int num;
    int rem=0,sum=0,temp=num,count=0;
    for(int i=0;i<=10;i++){
        cin>>num;
    if(num!=0)
    {
        rem=num%10;
        sum=sum+rem*rem*rem;
        num=num/10;
    }if (sum==temp)
    {
    count++;
    }
    }
    cout<<"armstrong quantity is -->"<<count<<endl;
    return 0;
}