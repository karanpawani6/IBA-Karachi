#include <iostream>
#include <cmath>
using namespace std;
int main(){
int x,y,i,r;
cout<<"enter the value of x and y"<<endl;
cin>>x>>y;
for(i=1;i<=fmax(x,y);i++){
        if(x%i==0 && y%i==0){
        r=i;
        }
}
cout<<r<<endl;
   return 0;
}