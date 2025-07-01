#include <iostream>
#include <cmath>
using namespace std;
int main(){
    int n;
    double sum=1;
    cout<<"enter the value of n "<<endl;
    cin>>n;
    int x;
    cout<<"enter the value of x "<<endl;
    cin>>x;
    int factorial =1;
    for(int i=1;i<=n;i++){
        factorial*=i;
        double r = (pow(x,i))/(double)(factorial);
        sum+=r;
    }
    cout<<sum<<" ";
    return 0;
}