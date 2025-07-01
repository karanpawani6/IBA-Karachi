#include <iostream>
using namespace std;
int main(){
int x,y,a,b,i;
a=0;
b=1;
cout<<"enter the number"<<endl;
cin>>x;
for(i=1;i<=x;i++){
    b=a+b;
    y=a;
    a=b;
    b=y;
    cout<<b<<" ";
}


return 0;
}