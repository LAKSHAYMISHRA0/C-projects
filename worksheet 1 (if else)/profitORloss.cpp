#include<iostream>
using namespace std;
int main(){
    double cost,sell,sum;
    cout<<"enter the cost price of the item -->";
    cin>>cost;
    cout<<"enter the selling price of the item-->";
    cin>>sell;
   
    sum=sell-cost;
   
     if (cost>sell)
    {
        cout<<"the seller made a loss "<<"of "<<sum<<endl;
    }
    else{
        cout<<"the seller made a profit "<<"of "<<sum<<endl;
    }
    
 return 0;   
    
}