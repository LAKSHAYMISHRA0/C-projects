#include<iostream>
using namespace std;
struct date{
    int dd;
    int mm;
    int yy;

};
void readdate(date &d){
cout<<"enter the date-->";
cin>>d.dd;
cout<<"enter the month-->";
cin>>d.mm;
cout<<"enter the year-->";
cin>>d.yy;
}
bool validate(const date &d){
    
        if (d.mm>=1 && d.mm<=12)
        {
            if ((d.dd>=1 && d.dd<=31)&& (d.mm==1||d.mm==3||d.mm==5||d.mm==7||d.mm==8||d.mm==10||d.mm==12))
            {
                return true;
            }else if ((d.dd>=1&&d.dd<=30)&&(d.mm==4||d.mm==6||d.mm==9||d.mm==11))
            {
                return true;
            }
            // else if (d.dd<=29 && d.mm==2 || (d.yy%400==0 || (d.yy % 4==0 && d.yy%100!=0)))
            // {
            //    return true;
            // }
            else if (d.dd<29 && d.mm==2 &&(d.yy%400 !=0 || (d.yy % 4!=0 && d.yy%100==0)))           //(it is not mandatory to apply this condition its lead to hardcore 
            {                                                                                       // programming !!)
                return true;
            }
            else{
                return false;
            }
        }else{
            return false;
        }
       
    }
    void printdate(const date &d){
    if(validate(d)==true){    
        if(d.mm == 1) {
        cout << "January "<<d.dd<<","<<d.yy;
    } else if (d.mm == 2) {
        cout << "February "<<d.dd<<","<<d.yy;
    } else if (d.mm == 3) {
        cout << "March "<<d.dd<<","<<d.yy;
    } else if (d.mm == 4) {
        cout << "April "<<d.dd<<","<<d.yy;
    } else if (d.mm == 5) {
        cout << "May "<<d.dd<<","<<d.yy;
    } else if (d.mm == 6) {
        cout << "June "<<d.dd<<","<<d.yy;
    } else if (d.mm == 7) {
        cout << "July "<<d.dd<<","<<d.yy;
    } else if (d.mm == 8) {
        cout << "August "<<d.dd<<","<<d.yy;
    } else if (d.mm == 9) {
        cout << "September "<<d.dd<<","<<d.yy;
    } else if (d.mm == 10) {
        cout << "October "<<d.dd<<","<<d.yy;
    } else if (d.mm == 11) {
        cout << "November "<<d.dd<<","<<d.yy;
    } else if (d.mm == 12) {
        cout << "December "<<d.dd<<","<<d.yy;
    } else {
        cout << "Invalid month!";
    }
    }
    else{
        cout<<"the entered date is not valid !!!#";
    }
    }
int main(){
    date d;
    readdate(d);
   bool valid = validate(d);
   if (valid)
   {
    cout<<"entered date is correct!!"<<endl;
   }else{
    cout<<"the entered date is invalid !!"<<endl;
   }
   printdate(d);
}