#include<iostream>
using namespace std;
int main(){
    int num;
    
    for (num= 1; num <=1000; num++)
    {
        bool prime=true;
        
    for( int j=2;j<=num/2;j++){
        if(num%j==0){
            prime=false;
              break;
        }
  
    }
    if(prime==true && num!=1)
    {
    cout<<" "<<num; 
    }
}

}