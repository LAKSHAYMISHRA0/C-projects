#include<iostream>
using namespace std;
int main(){
    int a,b,c,d,e;
    int max,min;
    cout<<"enter the values-->"<<endl;
    cin>>a>>b>>c>>d>>e;
    max=min=a;
   
    if(b>max) {
        max=b;
    
    }
    if (b<min)
   {
    
     min=b;
   }
   if (c>max)
   {
    max=c;
   }
   if(c<min)
   {
    
    min=c;
   }
    if (d>max)
   {
    max=d;
   }
   if(d<min)
   {
    
    min=d;
   }
    if (e>max)
   {
    max=e;
   }
   if(e<min)
   {
    
    min=e;
   }
   cout<<"minimum of the numbers are -->"<<min<<endl;
   cout<<"maximium of the numbers are -->"<<max<<endl;
    return 0;
}