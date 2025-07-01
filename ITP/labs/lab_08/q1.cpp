#include<iostream>
using namespace std;
long long factorial(long long n){
    if(n==0){
        return 1;
    }else{
    for(int i=n-1;i>=1;i--){
        n*=i;
    }
return n;
}
}
int main(){
    int n;
    cout<<"enter the value of n\n";
    cin>>n;
    cout<<"the factorial of "<<n<<" is "<<factorial(n);
    return 0;
}