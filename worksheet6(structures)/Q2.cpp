#include<iostream>
using namespace std;
struct mytime{
    int hh;
    int mm;
    int ss;
 
};
   void update(mytime &t){
    t.ss++;
    if (t.ss>=60)
    {
        t.ss=0;
    }
    t.mm++;
    if (t.mm>=60)
    {
        t.mm=0;
        
    }
    t.hh++;
    if(t.hh>=24){
        t.hh=0;
    }
}
void print(mytime t){
    cout<<"the timings is-->"<<endl;
    cout<<t.hh<<":"<<t.mm<<":"<<t.ss;
}
int main(){
    mytime t;

    cout<<"enter the hours-->";
    cin>>t.hh;
    cout<<"enter the minutes-->";
    cin>>t.mm;
    cout<<"enter the seconds-->";
    cin>>t.ss;
    update(t);
    print(t);
    
}