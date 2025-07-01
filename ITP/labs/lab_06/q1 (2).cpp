#include <iostream>
using namespace std;
int main(){
    int n,sum=0;
    cout<<"enter the number of values\n";
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        int b;
        cout<<"enter the value\n";
        cin>>b;
        a[i]=b;
        if(a[i]%2==0){
            sum++;
        }
    }
cout<<"total even numbers are "<<sum;
    return 0;
}