#include <iostream>
using namespace std;
int main(){
    int n,sum=0;
    cout<<"enter the number\n";
    cin>>n;
int i=1;
int k=abs(n);
while(i<k){
    int r=(n/i)%10;
    r=1;
    sum+=r;
     i*=10;
}
cout<<sum;
    return 0;
}