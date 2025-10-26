#include<iostream>
#include<string.h>
using namespace std;
int strlow(char name[]){
    for (int i = 0;name[i]; i++)
    {
        if (name[i]>='A'&&name[i]<='Z')
        {
            name[i]+=' ';
        }
        
    }
    

}
int strlen(char name[]){
    int i=0;
    while (name[i]!='\0')
    {
        i++;  
    }
    return i;
}
void strup(char name[],char result[],int temp){
    
    for (int i = 0; i<name[i]!='\0'; i++)
    {
        if (name[i]!=' ')
        {
        if (temp==0)
        {
        result+=name[i]-' ';//for uppercase
        
        temp=1;
        }else{
            result+=name[i];
        }
        
    }else if(temp==1)
        {
            result+=' ';
            temp=0;
        }
    
}

}

int main(){
    char name[40];
    char result[40];
   int temp=0;
    cout<<"enter the name-->";
    cin.getline(name,40);
    int length=strlen(name);
    strlow(name);
    strup(name,result,0);
    cout<<"the result is-->"<<result;
}
