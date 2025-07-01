#include <iostream>
using namespace std;
int main(){
int sum =0;
int x,n,b;
n=0;
cout<<"enter numbers till you want to sum"<<endl;
cin>>x;
b:n++;
cout<<n<<endl;
sum +=n;
if(n==x){
    cout<<"the sum is "<<sum<<endl;
    return 0;
}
    goto b;
}