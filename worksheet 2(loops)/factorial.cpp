#include<iostream>
using namespace std;
int main(){
    int num,i=1;
    cout<<"enter the number -->";
    cin>>num;
    int fact=1,temp=num;
    while(i<=num)
    {
        fact=fact*num;
        num--;
    }
    
 cout<<"the factorial of the number "<<temp<<" is --> "<<fact;
    
}