#include<iostream>
using namespace std;
int main(){
    int f,s,i,j,temp;
    
   
    
    cout<<"enter the size of the array -->";
    cin>>f;
    int first[f];
    
    
    for ( i = 0; i < f; i++)
    {
        cout<<"enter the element of"<<i<<"--> ";
        cin>>first[i];
    }
    cout<<"enter the size of the  second  array -->";
    cin>>s;
     int second[s];
    for ( i = 0; i <s ; i++){
        
        cout<<"enter the element of second array "<<i<<"--> ";
        cin>>second[i];
    }
    temp=f+s;
     int third[temp];
  for ( i = 0; i < f; i++)
  {
    third[i]=first[i];
  }
   for ( i = 0; i < s; i++)
  {
    third[f+i]=second[i];
  }
  
  
cout<<"the third array will be-->";
for ( j = 0; j < temp; j++)
{
    cout<<third[j]<<" ";
}

  return 0;
     
    
}