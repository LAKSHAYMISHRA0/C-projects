#include<iostream>
using namespace std;
int main(){
    int n, pcount=0,ncount=0,zcount=0;
    cout<<"enter the size of the array-->";
    cin>>n;
    int arr[n];
    cout<<"enter the elements of the array-->";
    for (int  i = 0; i < n; i++)
    {
        cin>>arr[i];
        if (arr[i]>=1)
        {
            pcount++;
        }
        else if (arr[i]==0)
        {
            zcount++;
        }
        else{
            ncount++;
        }
        
        
    }
    cout<<"the entered array is --->"<<endl;
    for (int  i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    cout<<"the positive count is -->"<<pcount<<endl;
    cout<<"the negative count is -->"<<ncount<<endl;
    cout<<"zero in the array elements -->"<<zcount<<endl;
    
}