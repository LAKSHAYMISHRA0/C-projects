#include<iostream>
using namespace std;
int main(){
    int sum=0,n;
    cout<<"enter the number--";
    cin>>n;
    for(int i=1;i<=n;i++){
        if(i%3==0){
            sum+=i;
        }
    }
    cout<<"sum is ="<<sum;
}