#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the size of the array-->";
    cin>>n;
    int arr[n],even[n],odd[n];
    cout<<"enter the elements of the array-->";
    for (int  i = 0; i < n; i++)
    {
        cin>>arr[i];
        if (arr[i]%2==0)
        {
            even[i]=arr[i];
        }
        else{
            odd[i]=arr[i];
        }
        
        
    }
    cout<<"the  array seperately is --->"<<endl;
    for (int i = 0; i < n; i++)
    {
        cout<<even[i]<<" "<<endl;
    }
    for (int i = 0; i < n; i++)
    {
        cout<<odd[i]<<" ";
    }
    
}