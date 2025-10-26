// // #include<iostream>
// // using namespace std;
// // int main(){
   
// //     cout<<"numbers from 1 to 20\n";
// //     for (int i = 0; i <=20; i++)
// //     {
// //      cout<<"   "<<i;
// //     }
// //     return 0;
// // }

// // by while loop 
// #include<iostream>
// using namespace std;
// int main(){
//     cout<< "Numbers from 1 to 20\n";
//     int i=0;
//     while (i<=20)
//     {
//         cout<<"   "<<i;
//         i++;
//     }
    
// }


//program of sum n nmbers

// #include<iostream>
// using namespace std;
// int main(){
//     int sum,n;
//     sum=0;
//     cout<<"enter how many numbers sum you want---";
//     cin>>n;
//         for (int i = 0; i <=n; i++)
//         {
//             sum+=i;
//         }
//     cout<<"   "<<sum;
//     return 0;
//  }


// program for sum of n odd numbers
#include<iostream>
using namespace std;
int main(){
    int sum=0,n;
    cout<<"enter how many numbers sum you want---";
    cin>>n;
        for (int i = 1; i <=n; i++)
        {   
            if (i%2!=0)
            {
               sum+=i; 
            }
            
            
        }
    cout<<sum;
    return 0;
 }