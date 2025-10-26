#include<iostream>
using namespace std;
int main(){
    int base,height,side,area,sum;
    cout<<"enter the base of the triangle-->";
    cin>>base;
    cout<<"enter the height of the triangle-->";
    cin>>height;
    cout<<"enter the side of the triangle-->";
    cin>>side;
    sum=base+height;
    area=(base*height)/2;
    if (side>=sum)
    {
        cout<<"it is not able to form a triangle!!!"<<endl;

    }else{    
    cout<<"area of the triangle is ="<<area;
    }
}