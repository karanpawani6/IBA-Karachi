#include<iostream>
using namespace std;
class date{
    int day;
    int month;
    int year;
    public:
    date(int d, int m, int y){
        if(m>0 && m<13){
        month = m;}
        else{
            month = 1;
        };
        day = d;
        year = y;
    };
    void setday(int day){
        this->day=day;
    };
    void setmonth(int month){
        if(month<13 && month>0){
        this->month = month;
        }else{
            this->month = 1;
        }
    };
    void setyear(int year){
        this->year = year;
    }
    string formatdate(){
       return  to_string(day) + "/" + to_string(month) + "/" + to_string(year); 
    }
};
int main(){
         date d1(19,1,2024);
         cout<<d1.formatdate()<<endl;; 
         d1.setday(17);
         cout<<d1.formatdate()<<endl; 
         d1.setmonth(5);
         cout<<d1.formatdate()<<endl;
        date d2(29,13,2024);
         cout<<d2.formatdate()<<endl;
    return 0;
}