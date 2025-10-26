/* Write a program to calculate dearness allowance for a given basic salary using following rules .
 A.basic salary <=3500 then da =159% of basic salary.
 B.basic salary >3500 and basic salary<=6000 then da=159% of the 3500 or 119% of the basic salary whichever is higher .
 C. Otherwise da=119% of the 6000 or 103% of the basic salary whichever is higher.*/

#include<iostream>
using namespace std;
int main(){
    double da,basic,da_159,da_119,da_103;
    cout<<"enter the basic salary of the employee-->";
    cin>>basic;
    if (basic<=3500)
    {
        da=basic*159/100;
    }
    else if(basic>3500 && basic<=6000)
    { 
        da_159=3500*159/100;
        da_119=basic*119/100;
        if(da_159 > da_119){
            da=da_159;
        }else{
            da=da_119;
        }
    }
    else
    {
       da_119=6000*119/100;
       da_103=basic*103/100;
       if (da_119 > da_103)
       {
        da=da_119;
       }
       else{
        da=da_103;
       }
    }
    cout<<"the dearness allowance of the employee is -->"<<da<<endl;
    return 0;
}