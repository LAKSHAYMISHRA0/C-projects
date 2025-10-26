#include<iostream>
using namespace std;
int main(){
    int time,minute=0,second=0,hour=0;
    cout<<"enter time in seconds-->";
    cin>>time;
    
      hour=time/3600;
      time%=3600;
    
    
      minute=time/60;
      time%=60;
    
    cout<<hour<<"hours"<<" "<<minute<<"minutes"<<" "<<time<<"seconds"<<endl;
    return 0;
}