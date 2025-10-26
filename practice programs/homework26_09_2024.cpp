//draw a flowchart to read multiple digit number and a single no. & check whether the number appears in the multiple digit number .if 
//yes then how many times .
#include<iostream>
using namespace std;
int main(){
    int multiple,single;
    int count=0;
    cout<<"enter the value of multiple";
    cin>>multiple;
    cout<<"enter the value of single";
    cin>>single;

    while (multiple>0)
    
    
    {
        
    
      int  rem=multiple%10;
        if (rem==single)
        {
            count++;
        }
        multiple=multiple/10;
    }
    cout<<count;
    return 0;
}