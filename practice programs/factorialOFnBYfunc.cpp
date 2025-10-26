#include<iostream>
using namespace std;
int factOFn(int n){
    int fact=1;
    for(int i=2;i<=n;i++){
        fact*=i;
        
    }
    return fact;  
    }
int main(){
    cout<<"the factorial is-->"<<factOFn(5)<<endl;
    cout<<"the factorial of 6 is -->"<<factOFn(6)<<endl;
    return 0;

} 