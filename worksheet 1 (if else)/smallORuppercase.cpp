#include<iostream>
using namespace std;
int main(){
char ch;

cout<<"enter what you want smallcase,uppercase letters,a digit or a special symbol-->";
cin>>ch;
if (ch>=97 && ch<=122)
{
    cout<<"the entered character is a small case letter"<<endl;
}
else if (ch>='A'&& ch<='Z')
{
    cout<<"the entered character is a upper case letter"<<endl;
}
else if (ch>='0' && ch<='9')
{
    cout<<"the entered character is a digit number"<<endl;
}
else{
    cout<<"the entered character is a special symbol"<<endl;
}

    }