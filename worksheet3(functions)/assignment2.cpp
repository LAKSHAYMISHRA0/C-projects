//series sum of 1+4+9+16+25.....n
#include<iostream>
using namespace std;
int series(int n){
    if (n==1)
    {
        return 1;
    }
    else{
        return ((n*n)+series(n-1));
    }
}
int main(){
    int num,result;
    cout<<"enter the number--> ";
    cin>>num;
    result=series(num);
    cout<<"the sum of the series-->"<<result;
}