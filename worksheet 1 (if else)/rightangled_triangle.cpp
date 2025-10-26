#include<iostream>
using namespace std;
int main(){
    int base,height,hypotenuse,sum=0;
    cout<<"enter the  of base  the triangle-->";
    cin>>base;
    cout<<"enter the height of the triangle-->";
    cin>>height;
    cout<<"enter the hypotenuse of the triangle-->";
    cin>>hypotenuse;
sum=base+height;
    
    if (hypotenuse==sum)
    {
        cout<<"it is an right angled triangle !!!"<<endl;
    }
    else{
        cout<<"it is not an right angled triangle !!!"<<endl;
    }
    
    
}