// #include<iostream>
// using namespace std;
// int main(){
//     int num;
//     bool prime=true;
//     cout<<"enter any number ---";
//     cin>>num;
//     for( int i=2;i<num-1;i++){
//         if(num%i==0){
//             prime=false;
         
//         }

//     }if(prime==true)
//     {
//     cout<<"your number is a prime number"; 

//     }
//     else
//     {
//     cout<<"your number is a non prime number!!";
//     }
// }


// int num;
//     cout<<"enter the number-->";
//     cin>>num;
//     bool prime=true;
//     int div=2;
//     while(div<=num)
//     {
//         if (num%div==0)
//         {
//             prime=false;
//         }
//         div=div+1;

//     }
//     if (prime==true)
//     {
//         cout<<"entered number is a prime number!!";
//     }
//     else{
//         cout<<"entered number is not a prime number !!! ";
//     }
    
//     return 0;
// }



#include<iostream>
using namespace std;
int main(){
    int num;
    bool prime=true;
    cout<<"enter any number ---";
    cin>>num;
    for( int i=2;i<num/2;i++){
        if(num%i==0){
            prime=false;
         
        }

    }
    if(prime==true)
    {
    cout<<"your number is a prime number"; 

    }
    else
    {
    cout<<"your number is a non prime number!!";
    }
}