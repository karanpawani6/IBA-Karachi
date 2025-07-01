#include<iostream>
#include <cmath>
using namespace std;
int main(){
int m;
int y;
cout<<"enter month from (1-12)"<<endl;
cout<<"enter the year "<<endl;
cin>>m>>y;
if(m==1 || m==3 || m==5 || m==7 || m==8 || m==10 || m==12 ){
    if((y % 4==0 && y % 100 != 0)||(y %400==0 ))
    cout<<" the days in this month is 31"<<endl;}
    else if( m==2 ){
        if((y % 4==0 && y % 100 != 0)||(y %400==0 ))
        cout<<" this leap year month days is 29"<<endl;
        else {
                        cout<<"the days are 28"<<endl;
        }
    }else if(m==4 || m==6 ||m==9 || m==11 ){
        cout<<"the month has 30 days"<<endl;
    }
    



    return 0;
}