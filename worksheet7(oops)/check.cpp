	#include<iostream>  
	using namespace std;    
	int main()  
	{  
	    int factorial(int);             // local declaration
	    int fact,value;  
	    cout<<"Enter any number: ";  
	    cin>>value;  
	    fact=factorial(value);  
	    cout<<"Factorial of a number is: "<<fact;  
	}  
	int factorial(int n)  
	{  
	    if(n==1 || n==0)
	        return 1;
	    return n * factorial(n-1);
	} 
