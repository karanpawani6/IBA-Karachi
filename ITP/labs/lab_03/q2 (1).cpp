#include <iostream>
#include<cmath>
using namespace std;
int main(){
double a,b,c;
cout<<" enter the values of a , b and c "<<endl;
cin>>a>>b>>c;
double d= pow(b,2)-4*a*c;
double x1 = (-b + sqrt(d))/2*a;
double x2 = (-b - sqrt(d))/2*a;
if(a==0){
    cout<<"divided by 0 "<<endl;
} else if(d<0){
    cout<<"no real roots "<<endl;
}else if(d==0){
    cout<<"equal root "<<endl;
    cout<<" root is "<<x1<<endl;

}else {
    cout<<"roots are real "<<endl;
    cout<<"one root is "<<x1<<endl;
    cout<<"other root is "<<x2<<endl;
}


    return 0;
}
