#include<iostream>
using namespace std;
int main(){
    int age;
    char ch,gender;
    cout<<"enter the age of the driver -->";
    cin>>age;
    cout<<"enter 'Y' if the driver is married if not enter 'N'--> ";
    cin>>ch;
    cout<<"enter 'M' if driver is male or enter 'F' if the driver is female";
    cin>>gender;

    //condition for married or not
    if (ch=='Y')
    {
        cout<<"the company insures the driver!!";
    }
    else if (ch=='N' && gender=='M' && age>30 )
    {
        cout<<"the company insures the driver!!";
    }
    else if (ch=='N' && gender=='F' && age>25 ){
        cout<<"the company insures the driver!!";
    }
    else{
        cout<<"the company will  not insures the driver!!";
    }
    return 0;
    
}