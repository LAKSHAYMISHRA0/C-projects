#include<iostream>
using namespace std;
int sumOFn(int n){
    int sum=0;
    for(int i=1;i<=n;i++){
        sum+=i;
        
    }
    return sum;
        
    }

int main(){
    cout<<sumOFn(5)<<endl;
    cout<<sumOFn(10)<<endl;
    return 0;

} 