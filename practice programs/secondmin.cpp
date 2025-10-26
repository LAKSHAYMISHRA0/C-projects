#include<iostream>
using namespace std;
int main(){
    int smin,min,a,b,c;
    cout<<"enter  the value of a -->";
    cin>>a;
    cout<<endl;
    cout<<"enter the value of b -->";
    cin>>b;
    cout<<endl;
    cout<<"enter the value of c -->";
    cin>>c;
    cout<<endl;
    if (a<b)
    {
        min=a;
        smin=b;
    }
    else{
        min=b;
        smin=a;
    }
    if (c<min)
    {
        smin=min;
        min=c;
    }
    else if(c>min){
        smin=c;
    }
    cout<<"second minimum is-->"<<smin;
    return 0;
    
}