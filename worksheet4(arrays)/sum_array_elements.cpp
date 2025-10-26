#include<iostream>
using namespace std;
int main(){
    int i,sum=0,n;
    
  cout<<"enter the size of the array-->";
  cin>>n;
  int arr[n];

  for ( i = 0; i < n; i++)
  {
      cout<<"enter the element no "<<i<<"--> "; 
       cin>>arr[i];
       sum+=arr[i];
  }
  cout<<"the sum of all elements are --> "<<sum;
}