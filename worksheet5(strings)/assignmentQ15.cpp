#include<iostream>
#include<string.h>
using namespace std;
int main(){
    int temp=0;
    string name;
    string result;
    cout<<"enter the name -->";
    getline(cin,name);//takng name from user
    for (int i = 0; i < name.length(); i++)
    {
       name[i]=tolower(name[i]);//converting the whole name in lowercase
    }
    for (int i = 0; i < name.length(); i++)
    {
        if (name[i]!=' ')//checking if given input by  user in the first index is space or not
        {
            if(temp==0)
            {
                result+=toupper(name[i]);//agar temp==0 hai to result
                temp=1;
            }else{
                result+=name[i];
            }   
        }
        else if (temp==1) 
            {
                result+=' ';
                temp=0;
            }
        
    }
    
   cout<<"the result is -->"<<endl<<result;
   
}//in this if we do give space in first index of name then it does'nt do anything and return to the loop 