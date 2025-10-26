#include<iostream>
using namespace std;
int digitSum(int n){
    int sum=0;
    while(n>0)
    {
      int  rem=n%10;
      n/=10;
      sum+=rem;
    }
      return sum;    
    }
int main(){
    cout<<"The sum of the digits is-->"<<digitSum(2356)<<endl;
    return 0;

} 