#include<iostream>

using namespace std;
int main(){
    int age;
    cout<<"enter your age--";
    cin>>age;
    if(age<=18){
        cout<<"YOU ARE NOT ELIGIBLE FOR VOTING"<<endl;
    }else{
        cout<<"YOU ARE ELIGIBLE FOR VOTING"<<endl;
    }
return 0;
}