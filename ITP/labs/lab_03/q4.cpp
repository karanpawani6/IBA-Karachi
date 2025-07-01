#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int main(){
    int user;
    cout<<"enter 3 digit number "<<endl;
    cin>>user;
srand(time(0));
int r = rand()%900+100;
cout<<"lottery number is "<<r<<endl;
int u3 = user%10 ;
int u2 = (user/10)%10;
int u1 = (user/100)%10;
int d3 = r % 10;
int d2 = (r/10)%10;
int d1 = (r/100)%10;
if(user==r){

    cout<<"comgratulation you won 10000 pkr"<<endl; 
}
else if((u1==d1 && u1==d2 && u1==d3) && (u2==d1 && u2==d2 && u2==d3) && (u3 == d1 && u3 == d2 && u3 == d3) && (u1 == u2 && u2 == u3 && u3 == u1)) 
{
cout<<" congratulation you won 5000 pkr"<<endl;
}
else if(( u1==d1 || u1==d2 || u1==d3) || (u2==d1 || u2==d2 || u2==d3) || (u3 == d1 || u3 == d2 || u3 == d3)){
cout<<" you won 1000 pkr "<<endl;
}
else {
    cout<<"better luck next time"<<endl;
}
return 0;

}