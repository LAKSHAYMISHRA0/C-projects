//draw a program to read a number whether it is a super palindrome
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the number -->"<<endl;
    cin>>n;
    int rem=0;
    int rev=0;
    int temp=n;
 while(n!=0)
    {   
        rem=n%10;
        rev=rev*10+rem;
        n/=10;
    }
    if (temp==rev)
    { 
    int square;
    square=n*n;
    int  temp=square;
    rev=0;
    rem=0;
    while(n!=0)
    {   
        
        rem=n%10;
        rev=rev*10+rem;
        n/=10;
    }
    if (temp==rev)
    {
        cout<<"it is a super palindrome"<<endl;
    }else{
        cout<<"it is not a super palindrome"<<endl;
    }
    }
    else{
        cout<<"it is not a super palindrome"<<endl;
    }
 return 0;
    }
   
    
