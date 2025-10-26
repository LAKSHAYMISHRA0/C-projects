#include<iostream>
using namespace std;
int main(){
    int num,rev=0,rem=0;
    cout<<"enter the five digit number -->";
    cin>>num;
    int temp=num;
    while (num!=0)
    {
        rem=num%10;
        rev=rev*10+rem;
        num/=10;
        
        
    }
    if (rev==temp)
        {
             cout<<"the number "<<temp<<" is a palindrome"<<endl;
            cout<<"the reverse of the given number is -->"<<rev;
        }
        else{
            cout<<"the number "<<temp<<"is not a palindrome"<<endl;
        }
    
}