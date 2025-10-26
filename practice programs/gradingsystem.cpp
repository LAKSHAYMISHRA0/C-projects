#include<iostream>
using namespace std;
int main(){
    int marks1,marks2,marks3;
    cout<<"enter the marks of DSA--\n";
    cin >> marks1;
    cout<<"enter the marks of JAVA--\n";
    cin>> marks2;
    cout<<"enter the marks of SYSTEM ANALYSIS & DESIGN--\n";
    cin>>marks3;
    int total_marks=marks1+marks2+marks3;
    if (total_marks>=270)
    {
        cout<<"GRADE A+";
    }
    else if (total_marks>=240 && total_marks<=270)
    {
        cout<<"GRADE A";
    }
    else if (total_marks>=210 && total_marks>=240)
    {
        cout<<"GRADE B";
    }
    else if (total_marks>=180 && total_marks<=210)
    {
        cout<<"GRADE C";
    }else
    {
        cout<<"BETTER LUCK NEXT TIME FAIL!!\n";
    }
    return 0;
}