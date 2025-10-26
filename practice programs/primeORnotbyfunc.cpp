#include<iostream>
using namespace std;
bool prime(int num){
    bool isprime=true;
    
        if(num<=1){
            return false;
        }
for (int i = 2; i < num; i++)
{
   if (num%i==0)
   {
      return false;
   }
    
}

    
    return true;
}
int main(){
    int n=10;
    if(prime(n)){
    cout<<"is prime"<<endl;
    }
    else{
        cout<<"is not a prime no."<<endl;
    }

return 0;
}