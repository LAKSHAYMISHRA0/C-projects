// //write a program to find the largest of the two given number 
// #include<iostream>
// using namespace std;
// int main(){
//     int num1,num2,largest;
//     cout<<"enter the value of number 1 --->";
//     cin>>num1;
//     cout<<"enter the value of number 2 --->";
//     cin>>num2;
//     if (num1>num2)
//     {
//        largest=num1;
//     }
//     if (num1==num2)
//     {
//         largest=0;
//     cout<<"\nTHE BOTH NUMBERS ARE EQUAL!!!"<<endl;
//      }
//     else{
//     largest=num2;
//     }
// cout<<"THE LARGEST AMONG THE TWO NUMBERS THAT ARE ENTERED BY THE USER IS-->"<<largest;

// }


//write a program to find the largest of the three given numbers 
#include<iostream>
using namespace std;
int main(){
    int num1,num2,num3,largest;
    cout<<"enter the value of number 1 --->";
    cin>>num1;
    cout<<"enter the value of number 2 --->";
    cin>>num2;
    cout<<"enter the value of number 3 --->";
    cin>>num3;
    if (num1>num2 && num1>num3)
    {
       largest=num1;
    }
    if (num1==num2 && num2==num3)
    {
        largest=0;
    cout<<"\nTHE ALL NUMBERS ARE EQUAL!!!"<<endl;
     }
    if (num2>num1 && num2>num3)
    {
        largest=num2;
    }
    
    else{
        largest=num3;
    }
    cout<<"THE LARGEST AMONG THE THREE NUMBERS THAT ARE ENTERED BY THE USER IS-->"<<largest;
return 0;
}