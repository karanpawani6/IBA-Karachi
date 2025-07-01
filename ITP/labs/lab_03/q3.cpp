#include <iostream>
#include <cmath>
using namespace std; 
int main(){
double a,b,c;
cout<<"enter the values of a,b and c "<<endl;
cin>>a>>b;
double t;
if(a<b && a<10){
    t =pow(a,2) + a*b + sqrt(a*b);
    cout<<t<<endl;
} else if(a==b || a>10){
    t = a*pow(b,2)-2*a +5*b;
    cout<<t<<endl;
}
return 0;
}