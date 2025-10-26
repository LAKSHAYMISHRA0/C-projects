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
    int n=100;
    for (int i = 1; i <=n; i++)
    {
     if(prime(i)){
    cout<<i<<endl;
    }
    }
    
   
    
   

return 0;
}