#include<iostream>
using namespace std;
struct mytime{
    int hh;
    int mm;
    int ss;
};
int main(){
    mytime t;
    cout<<"enter the hours-->";
    cin>>t.hh;
    cout<<"enter the minutes-->";
    cin>>t.mm;
    cout<<"enter the seconds-->";
    cin>>t.ss;
    if (t.hh<24 && t.mm<60 && t.ss<60)
    {
    cout<<"the timings is-->"<<endl;
    cout<<t.hh<<":"<<t.mm<<":"<<t.ss;
    }else{
        cout<<"the timings are invalid !!";
    }
}