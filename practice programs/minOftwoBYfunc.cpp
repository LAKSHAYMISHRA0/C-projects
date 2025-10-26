#include<iostream>
using namespace std;
int minOfTwo(int a,int b){
    if(a>b){
        return b;
        
    }
    else{
        return a;
    }
}
int main(){
    
    cout<<"minimum of two is--"<<minOfTwo(5,6)<<endl;
    return 0;

}