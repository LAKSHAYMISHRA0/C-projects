#include<iostream>
using namespace std;
int revarray(int arr[],int size){
    int start=0,end=size-1;
    while (start<end)
    {
        swap(arr[start],arr[end]);
        start++;
        end--;
    }
    
}
int main(){
    
    int arr[]={2,4,3,1,6,5,8,7};
    int size=8;
revarray(arr,size);
    for (int i = 0; i < size; i++)
    {
        cout<<arr[i]<<endl;
    }
    cout<<endl;
    
    return 0;
}