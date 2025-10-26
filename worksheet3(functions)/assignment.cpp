#include<iostream>
using namespace std;
int digits(int n){
    if (n==0)
    {
        return 0;
    }else{
        return(n%10+digits(n/10));
    }
    
}
int main(){
    int n,sum;
    cout<<"enter the number-->";
    cin>>n;
    sum=digits(n);
    cout<<"the sum of digits -->"<<sum;

}