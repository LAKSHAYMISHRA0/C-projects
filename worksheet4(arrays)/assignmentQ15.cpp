#include<iostream>
using namespace std;
int linear(int arr[],int n,int found,int key)
{
if (n==0)//check the user did give the size of array is zero or not 
{
    return 0;
}
if (arr[n-1]==key)//here n-1 is the index of the array 
{
    return n-1;
}
else{
    return linear(arr,n-1,1,key);//recursion 
}


}
int main(){
    int i,key;
    int n;
cout<<"enter the size of the array-->";
cin>>n;
    int arr[n];


    cout<<"enter "<<n<<" elements:-";
    for ( i = 0; i < n; i++)
    {
    cin>>arr[i];
    }
    cout<<"enter the value to find :";
    cin>>key;
    int result=linear(arr,n,0,key);
    if (result!=n-1)
    {
        cout<<"the key is found at the index "<<result;
       
    }
    else{
         cout<<"the key is not present in the array ";
    }
    
}