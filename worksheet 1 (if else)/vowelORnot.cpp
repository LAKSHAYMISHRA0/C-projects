#include<iostream>
using namespace std;
int main(){
  char ch;
  cout<<"enter the character--->";
  cin>>ch;
  switch (ch)
  {
  case 'a':
  case 'e':
  case 'i':
  case 'o':
  case 'u':
    cout<<"it is a vowel";
    break;
  case 'A':
  case 'E':
  case 'I':
  case 'O':
  case 'U':
    cout<<"it is a vowel";
    break;
  default:
  cout<<"IT IS NOT A VOWEL !!";
    break;
  }
}