
#include<iostream>
#include<math.h>
using namespace std;
int main(){
    int num;
    int rem=0,digit=0;
    
        cout<<"enter digit number-->";
        cin>>num;
        int temp=num;
        int sum=0;
         while (num!=0){
            num/=10;
            digit++;
         }
      num=temp;
    while(num>0)
    {
        rem=num%10;
        sum+=pow(rem,digit);
        num/=10;
    }
    if (sum==temp)
    {
    cout<<"the number "<<temp<<" is a armstrong number !!!"<<endl;
    }else{
        cout<<"the number "<<temp<<" is not a armstrong number !!!"<<endl;
    }
    
    
    return 0;
}