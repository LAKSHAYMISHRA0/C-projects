#include<iostream>
#include<math.h>
using namespace std;

int Power(int b,int p){
    int pow=1;
    while(p>=1)
    {
       pow=b*pow;
       p=p-1; 
    }
    return pow;
}
int factorial(int num){
    int fact=1;
    for (int i = 2; i <= num; i++)
    {
        fact*=i;
    }   
    return fact;
}
int main(){
    int n,x,a=2;
    double res=0.0,p_result,f_result;
    cout<<"Enter the number-->";
    cin>>n;
    cout<<"Enter the Value of X";
    cin>>x;
    int i=1;
    while (i<=n)
    {
        p_result=Power(n,a);
        f_result=factorial(a);
        res=p_result/f_result;
        cout<<res<<", ";
        // cout<<p_result<<", ";
        i++;
        a+=2;
    }
    
    
}