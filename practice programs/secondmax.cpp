#include<iostream>
using namespace std;
int main(){
    int smax,max,a,b,c;
    cout<<"enter  the value of a -->";
    cin>>a;
    cout<<endl;
    cout<<"enter the value of b -->";
    cin>>b;
    cout<<endl;
    cout<<"enter the value of c -->";
    cin>>c;
    cout<<endl;
    if (a==b && b==c)
    {
        cout<<"NO NUMBER IS SECOND MAXIMUM!!"<<endl;
        smax=0;
    }
   
    else
    {
    if (a>b)
    {
        max=a;
        smax=b;
    }
    else {
        max=b;
        smax=a;
    }
    if (c>max)
    {
        smax=max;
        c=max;
    }
    else if(c<max){
        smax=c;
    }
    
    cout<<"second maximum is-->"<<smax;
    }
    return 0;
    
}