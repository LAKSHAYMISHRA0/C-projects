	#include <iostream>
	#include<iomanip>
	using namespace std;
	
	// Defining enum Colour
	enum Colour { Red, Green, Blue };
	
int main()
{
	//       Colour clr = Red;
	
	//       //compile time error
	//       //Colour clr = 0;
	
	//       switch (clr)
	//       {
    //         case Red: 
	//                                cout << "Colour is Red";
	//                                break;
	//             case Green:
	//                                cout << "Colour is Green";
	//                                break;
	//             case Blue:
	//                                cout << "Colour is Blue";
	//        }
	//         clr = Blue;
	//         if(clr == Colour::Red)
	//                 cout << "\nColour is red";
	//         else
	//                 cout << "\nColour is not red"; 
    //                 clr=Red;
	// cout<<"\nValue of clr: "<<clr;
	//       if(clr == 0)              // This will also work
	//              cout << "\n  Colour is red";
	//       else
	//              cout << "\nColour is not red"; 
	        
	//         cout<<"\nValue of clr: "<<clr;
	cout<<setbase(16)<<100<<endl;
	cout<<setw(10)<<"hello"<<endl;
	cout<<setfill('*')<<setw(10)<<"hello"<<endl;
	cout<<setprecision(4)<<1.45621<<endl;
	cout << setiosflags(ios::fixed);
	}
