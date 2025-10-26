#include<iostream>
using namespace std;
int binary(int arr[],int i,int j,int key,int found){
  if(i <=j){
  int mid=(i+j)/2;
  if (arr[mid]==key)
  {
    return mid;
  }
  else if(key>arr[mid])
  {
     return binary(arr,mid+1,j,key,1);
  }
  else{
   return binary(arr,i,mid-1,key,1);
  }
  
  }
return 0;

}
int main(){
    int i,j,mid,key,found=0;
    int n;
    cout<<"enter the size of the array-->";
    cin>>n;
    int arr[n];
    cout<<"enter the "<<n<<" elements of the array-->";
    for ( i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    cout<<"enter the the key to find-->";
    cin>>key;
    int result=binary(arr,0,n-1,key,0);
if (result==0)
{
  cout<<"the value "<<key<<" is not found";
} 
if(result!=0){
     cout<<"the value "<< key<<" is found at index-->"<<result<<endl;
}


    
}