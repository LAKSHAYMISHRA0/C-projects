#include<iostream>
using namespace std;
int factOFn(int n){
    int fact=1;
    for(int i=2;i<=n;i++){
        fact*=i;
        
    }
    return fact;
        
    }
    int ncr(int n,int r){
int fact_n=factOFn(n);
int fact_r=factOFn(r);
int fact_ncr=factOFn(n-r);
return fact_n/(fact_r*fact_ncr);
    }

int main(){
    int n=8,r=2;
    cout<<ncr(n,r)<<endl;
    
    // cout<<"the factorial is-->"<<factOFn(5)<<endl;
    // cout<<"the factorial of 6 is -->"<<factOFn(6)<<endl;
    return 0;

} 