#include<iostream>
using namespace std;
int linearSearch(int arr[],int size,int target){
    for (int i = 0; i < size; i++)
    {
        if (arr[i]==target)
        {
            return i;
        }
        
    }
    return -1;  //otherwise return -1 if target was not found
    
}
int main(){
    int size,target;
    int arr[]={1,2,3,4,5,6,8,7};
    size=8;
    target=50;
    cout<<linearSearch(arr,size,target)<<endl;
    return 0;
}