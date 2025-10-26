// //write a program to find the smallest of the two given number 
// #include<iostream>
// using namespace std;
// int main(){
//     int num1,num2,smaller;
//     cout<<"enter the value of number 1 --->";
//     cin>>num1;
//     cout<<"enter the value of number 2 --->";
//     cin>>num2;
//     if (num1<num2)
//     {
//        smaller=num1;
//     }
//     if (num1==num2)
//     {
//         smaller=0;
//     cout<<"\nTHE BOTH NUMBERS ARE EQUAL!!!"<<endl;
//      }
//     else{
//     smaller=num2;
//     }
// cout<<"THE SMALLEST AMONG THE TWO NUMBERS THAT ARE ENTERED BY THE USER IS-->"<<smaller;

// }


//write a program to find the smallest of the three given numbers
#include<iostream>
using namespace std;
int main(){
    int num1,num2,num3,smallest;
    cout<<"enter the value of number 1 --->";
    cin>>num1;
    cout<<"enter the value of number 2 --->";
    cin>>num2;
    cout<<"enter the value of number 3 --->";
    cin>>num3;
    if (num1<num2 && num1<num3)
    {
       smallest=num1;
    }
    if (num1==num2 && num2==num3)
    {
    cout<<"\nTHE ALL NUMBERS ARE EQUAL!!!"<<endl;
     }
    if (num2<num1 && num2<num3)
    {
        smallest=num2;
    }
    
    else{
        smallest=num3;
    }
    cout<<"THE SMALLEST AMONG THE THREE NUMBERS THAT ARE ENTERED BY THE USER IS-->"<<smallest;
return 0;
}