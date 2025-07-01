#include <iostream>
using namespace std;
int main(){
    int a=0,b=1;
    int n;
    cout<<"enter the number of terms\n";
    cin>>n;
    for(int i=1;i<=n;i++){
        cout<<a<<" ";
        int t =b;
        b=a+b;
        a=t;
    }
    return 0;
}