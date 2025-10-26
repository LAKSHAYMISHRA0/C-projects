// smallest and largest numbers in the array---
#include<iostream>
using namespace std;
int main(){
    int nums[]={5,15,22,1,-15 ,24 };

    int size=6;
    int smallest= INT_FAST8_MAX;
    int largest=INT_FAST8_MIN;
    for (int i = 0; i < size; i++)
    {
if (nums[i]<smallest)
{
    smallest=nums[i];
}
if (nums[i]>smallest)
{
    largest=nums[i];
}

    }
    cout<<"smallest="<<smallest<<endl;
    cout<<"largest="<<largest<<endl;
    
return 0;

}