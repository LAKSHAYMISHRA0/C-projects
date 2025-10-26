#include<iostream>
using namespace std;
int main(){
    int side1,side2,side3;
    cout<<"enter the side1 of the triangle-->";
    cin>>side1;
    cout<<"enter the side2 of the triangle-->";
    cin>>side2;
    cout<<"enter the side3 of the triangle-->";
    cin>>side3;
    if (side1==side2 && side2==side3)
    {
        cout<<"it is an equilateral triangle !!!!"<<endl;
    }
    
    else{
         cout<<"it is NOT an equilateral triangle !!!!"<<endl;
    }
    
}