#include<iostream>
using namespace std;
int count_7(int n){
    int count=0;
    int x;
    for(int i=1;i<=n;i=i*10){
         x=(n/i)%10;
        if(x==7){
            count++;
        }
    }
    return count;
}
int main(){
    int n;
    cout<<"enter the number\n";
    cin>>n;
    cout<<"the count of 7 in number is "<<count_7(n);
    return 0;
}