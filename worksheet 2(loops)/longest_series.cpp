#include<iostream>
using namespace std;
int main(){
    int num,count=1,mcount=1;
    cout<<"enter the number-->";//yaha apan ek previous number le rhe taki apan compare kara sake baadme
    cin>>num;
    int temp=num;
    for (int i = 1; i < 10; i++)//ye user se ten number lene ke liye loop chala rhe h 
    {
        cout<<"enter the number-->";
        cin>>num;
    
    if (num>temp)//yaha apan compare kar rhe hai number ko previous number se ki jo number h vo increase hua h ya nhi ye pta lagane ke liye
    {
        count++;
    }
    else{
        if (count>mcount)//agar upper condition false hoti hai toh fir apn check karenge ki jo count hai woh mcount se bada hai ya nhi
        {
            mcount=count;//agar hai toh count ko mcount me assign kar rhe taki apan end me maximum count nikal paye
        }
        count=1;//yaha apan count ko 1 kar rhe hai kyuki agar (num>pnum) condition false hoti hai toh count 1 hona chahiye taki woh firse check ho sake
    }
    temp=num;//yaha par humne pnum me num ko assign isliye kiya hai taki compiler num ko next new number jo user dalega usse compare kar sake
    
}
if (count>mcount)//yaha apan firse count ko mcount se compare kara rhe kyuki apan ne phele usse else block me lagaya hai isliye agar num>pnum wali condition true hogi toh wo else block me jayega hi nhi.
{
    mcount=count;
}

cout<<"the length of the longest increasing series is :"<<mcount;
}