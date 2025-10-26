//draw a flowchart to read 10 values & display their factorial 
#include<iostream>
using namespace std;
int main()
{
    int num,fact;
    for(int i=1;i<=10;i++)
    {
        cout<<"enter the numbers-->"<<endl;
        cin>>num;
        
        fact=1;
    for (int j = 2; j<=num; j++)
    {
        fact*=j;
    }
     cout<<"the factorials of "<<num<<" is "<<fact<<endl;
    }
    return 0;
}