/*by if else method*/

// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"enter a month number-->";
//     cin>>n;
//     if (n==1 || n==3 || n==5 ||n==7 || n== 8 || n==10 || n==12)
//     {
//         cout<<"31 days !!";
//     }
//     else if (n==4 || n==6 || n==9 ||n==11 )
//     {
//         cout<<"30 days !!";
//     }
//     else if( n==2){
//      cout<<"28 or 29 days.";
//     }
// else{
//     cout<<"invalid month!!";
// }
// }

/*by the switch method*/
#include<iostream>
using namespace std;
int main(){
  int month;
  cout<<"enter the no. of month--->";
  cin>>month;
  switch (month)
  {
  case 1:
  case 3:
  case 5:
  case 7:
  case 8:
  case 10:
  case 12:
    cout<<"31 days";
    break;
  case 4:
  case 6:
  case 9:
  case 11:
    cout<<"30 days";
    break;
    case 2:
    cout<<"28 or 29 days";
    break;
  default:
  cout<<"INVALID MONTH !!";
    break;
  }
}