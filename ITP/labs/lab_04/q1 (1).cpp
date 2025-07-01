#include <iostream>
using namespace std;
int main(){
int p, r,i;
cout<<"enter the number "<<endl;
cin>>p;
if(p==2){
cout<<"prime"<<endl;
return 0;
}
else if(p==1||p==0){
    cout<<"not prime"<<endl;

return 0;
}
for(i=2;i<p;i++){
    if(i==2)
    r=p%i;
}if(r==0){
    cout<<"not prime"<<endl;
}
else{
    cout<<"prime"<<endl;
}
return 0;
}