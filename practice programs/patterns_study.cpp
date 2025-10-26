// //pattern study in square shape

// // #include<iostream>
// // using namespace std;
// // int main(){
// //     int n=4;
// //     for(int i=1;i<=n;i++){
// //          for(int j=1;j<=n;j++)
// //     {
// //         cout<<j;
    
// //     }
// //     cout<<endl;
// //     }
   
// // }

// // ----------------------------------------------------------------------------------------------------------------

// //SQUARE PATTERN
// // 123
// // 456
// // 789

// // #include<iostream>
// // using namespace std;
// // int main(){
// //     int n,sum=1;
// //     cout<<"enter the number --";
// //     cin>>n;
// //     for(int i=0;i<n;i++){
// //      for(int j=0;j<n;j++){
    
// //         cout<<"    "<<sum;
// //         sum++;
    
// //     }
// //     cout<<endl;
// //     }
// //     // for verifying the pattern is correct or not
// //     cout<<"after value -->"<<sum<<endl;
// //    return 0;
// // }
// // ----------------------------------------------------------------------------------------------------------------
// //pattern study of the triangle that is easy with (*)
// //for the output-:
// // *
// // **
// // ***
// // **** 

// // #include<iostream>
// // using namespace std;
// // int main(){
// //     int n,sum=1;
// //     cout<<"enter the number --";
// //     cin>>n;
// //     for(int i=0;i<n;i++){
// //      for(int j=0;j<i+1;j++){
    
// //         cout<<"    "<<"*";
// //         sum++;
    
// //     }
// //     cout<<endl;
// //     }
// //     // for verifying the pattern is correct or not
// //     cout<<"after value -->"<<sum<<endl;
// //    return 0;
// // }

// // _______________________________________________________________________________________________________________________


// //pattern study of the triangle 
// // for the output--:
// // 1
// // 22
// // 333
// // 4444

// // #include<iostream>
// // using namespace std;
// // int main(){
// //     int n,sum=1;
// //     cout<<"enter the number --";
// //     cin>>n;
// //     for(int i=1;i<=n;i++){
// //      for(int j=1;j<i+1;j++){
    
// //         cout<<"    "<<i;
        
    
// //     }
// //     cout<<endl;
// //     }
// //     // for verifying the pattern is correct or not
// //     cout<<"after value -->"<<sum<<endl;
// //    return 0;
// // }


// //-----------------------------------------------------------------------------------------------------------------------------------------
// //pattern study of the reverse triangle 
// // for the output--:
// // 1
// // 21
// // 321
// // 4321


// // #include<iostream>
// // using namespace std;
// // int main(){
// //     int n;
// //     cout<<"enter the number --";
// //     cin>>n;
// //     for(int i=0;i<n;i++){
// //      for(int j=i+1;j>0;j--){
// //          cout<<"    "<<j;
// //      }      
// //     cout<<endl;
// //     }
    
// //     return 0;
// //     }
   

// //    ////-----------------------------------------------------------------------------------------------------------------------------------------
// // //pattern study of the floyd triangle 
// // // for the output--:
// // // 1
// // // 2 3
// // // 4 5 6
// // // 7 8 9 10

// // #include<iostream>
// // using namespace std;
// // int main(){
// //     int n,sum=1;
// //     cout<<"enter the number --";
// //     cin>>n;
// //     for(int i=0;i<n;i++){
// //      for(int j=0;j<i+1;j++){
// //          cout<<"    "<<sum;

// //          sum++;
// //      }      
// //     cout<<endl;
// //     }
    
//     //return 0;
//    // }

// //    ////-----------------------------------------------------------------------------------------------------------------------------------------
// // //pattern study of the inverted  triangle 
// // // for the output--:

// // // 1111
// // //  222
// // //   33
// // //    4

// // #include<iostream>
// // using namespace std;
// // int main(){
// //     int n;
// //     cout<<"enter the number --";
// //     cin>>n;
// //     for(int i=1;i<=n;i++){
// //      for(int j=0;j<=i;j++){
// //          cout<<" ";
         
        
// //      }      
// //      for(int h=0;h<=n-i;h++){
// //         cout<<i;
// //      }
// //     cout<<endl;
// //     }
// //     return 0;
// // }

// ////-----------------------------------------------------------------------------------------------------------------------------------------
// //pattern study of the inverted  pyramid 
// // for the output--:

// // 1 1 1 1
// //  2 2 2
// //   3 3
// //    4

// // #include<iostream>
// // using namespace std;
// // int main(){
// //     int n;
// //     cout<<"enter the number --";
// //     cin>>n;
// //     for(int i=1;i<=n;i++){
// //      for(int j=0;j<=i;j++){
// //          cout<<" ";
         
        
// //      }      
// //      for(int h=0;h<=n-i;h++){
// //         cout<<i<<" ";
// //      }
// //     cout<<endl;
// //     }
// //     return 0;
// // }

// ///-----------------------------------------------------------------------------------------------------------------------------------------
// //pattern study of the inverted  pyramid 
// // for the output--:

// //    1
// //  1 2 1
// // 1 2 3 2 1
// //1 2 3 4 3 2 1


#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the number --";
    cin>>n;
    for(int i=0;i<n;i++){
       
     for(int j=0;j<n-i-1;j++){
          cout<<" ";
         
        
     }      
     for(int h=1;h<=i+1;h++){
        cout<<h;
     }
     for (int g  = i; g>0; g--)
     {
        cout<<g;
     }
     
    cout<<endl;
    }
    return 0;
}


// ///-----------------------------------------------------------------------------------------------------------------------------------------
// //pattern study of the diamond with(*)
// // for the output--:

// //     *
// //  *    *
// // *      *
// //*         *  
// // *        *
// //   *      *
// //      *  *
// //

// #include<iostream>
// using namespace std;
// int main(){
//     int n,i;
//     cout<<"enter the number --";
//     cin>>n;
//     for(int i=0;i<n;i++){
//      for(int j=0;j<n-i-1;j++){
//           cout<<" ";
//      }      
//        cout<<"*";
//         if(i!=0){
//      for(int h=1;h<=2*i-1;h++){
//         cout<<" ";
//         }
//         cout<<"*";
//         }
//     }
//         for(int l=0;l=n-1;l++){
//             //spaces
//             for (int m= 0; m<i+1;m++)
//             {
//                 cout<<" ";
//             }
//             cout<<"*";
        

//      if (i!=n-2)
//      {
//         //spaces
//      for (int g  = 0; g<2*(n-i)-5; g++)
//       {
//          cout<<" ";
//       }
//       cout<<"*";
//      }
//     }
    
//     return 0;
// }


// ///-----------------------------------------------------------------------------------------------------------------------------------------

//     *
//    * *
//   * * *
//  * * * *
// * * * * *
//  * * * *
//   * * *
//    * *
//     *


// #include <iostream>
// using namespace std;

// int main() {
//     int n;
//     cout << "Enter the number of rows for the upper half: ";
//     cin >> n;
//     // Upper half
//     for (int i = 1; i <= n; i++) {
//         for (int j = i; j < n; j++)
//             cout << " ";
//         for (int j = 1; j <= i; j++)
//             cout << "* ";
//         cout << endl;
//     }
//     // Lower half
//     for (int i = n - 1; i >= 1; i--) {
//         for (int j = n; j > i; j--)
//             cout << " ";
//         for (int j = 1; j <= i; j++)
//             cout << "* ";
//         cout << endl;
//     }

//     return 0;
// }

// ///-----------------------------------------------------------------------------------------------------------------------------------------

//     *	
//    ***
//   *****
//  *******
// *********
//  *******
//   *****
//    ***
//     *

// #include <iostream>
// using namespace std;

// int main() {
//     int n;

//     cout << "Enter an odd number for the diamond's height: ";
//     cin >> n;

//     if (n % 2 == 0) {
//         cout << "Please enter an odd number!" << endl;
//         return 1;
//     }

//     int mid = n / 2;

//     // Upper half
//     for (int i = 0; i <= mid; i++) {
//         for (int j = 0; j < mid - i; j++)
//             cout << " ";
//         for (int j = 0; j < 2 * i + 1; j++)
//             cout << "*";
//         cout << endl;
//     }

//     // Lower half
//     for (int i = mid - 1; i >= 0; i--) {
//         for (int j = 0; j < mid - i; j++)
//             cout << " ";
//         for (int j = 0; j < 2 * i + 1; j++)
//             cout << "*";
// 		      cout << endl;
//     }

//     return 0;
// }