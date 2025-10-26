//         1  ------>1---------|
//       1 2 1 ----->3 --------|
//     1 2 3 2 1 ------>5 -----|------>idhar har row me  column 2 se increase ho rhe hai  
//   1 2 3 4 3 2 1 ----->7 ----|
// 1 2 3 4 5 4 3 2 1 ----->9 --|

#include<iostream>
using namespace std;
int main(){
    int l;
    cout<<"enter the number of lines-->";
    cin>>l;
    int b,a=1;
    for (int i = 1; i <= l; i++)//ye loop outer loop ke liye 
    {
        b=i-1;//ye reverse print karane ke liye for example 123 _ 21
        for (int j = i; j< l; j++)//ye inner loop space print karane  ke liye 
        {
            cout<<" "<<" ";
        }
        for (int  k = 1; k <= a; k++)//agar har ek row me column 2 se increse ho rhe he tho agar hum loop ko (a) tak chalaye tho 
        {
           if (k<=i)
           {
            cout<<k<<" ";
           }
           else{
            cout<<b<<" ";
            b--;
           }
        }

    cout<<endl;
    a+=2;
    }
    
    return 0;
}