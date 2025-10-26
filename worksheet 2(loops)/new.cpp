#include<iostream>
using namespace std;
int main(){
    int l;
    cout<<"enter the number of lines-->";
    cin>>l;
    int a=1;

    for (int i = 1; i <= l; i++)//ye loop outer loop ke liye 
    {
        
        for (int j = 1; j<=i; j++)//ye inner loop space print karane  ke liye 
        {
            cout<<" "<<" ";
        }
        for (int  k = 1; k<=l-i; k++)//agar har ek row me column 2 se increse ho rhe he tho agar hum loop ko (a) tak chalaye tho 
        {
        cout <<i<<" ";
        }

    cout<<endl;
    a++;
    
    }
    
    return 0;
}


// 1
// 2 3
// 4 5 6
// 7 8 9 10

// #include<iostream>
// using namespace std;
// int main(){
//     int n,sum=1;
//     cout<<"enter the number --";
//     cin>>n;
//     for(int i=0;i<n;i++){
//      for(int j=0;j<i+1;j++){
//          cout<<sum<<" ";

//          sum++;
//      }      
//     cout<<endl;
//     }
    
//     return 0;
//    }

