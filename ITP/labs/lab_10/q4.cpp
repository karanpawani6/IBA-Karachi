#include<iostream>
using namespace std;
int count(int x){
    if(x==0) return 0;
    if(x%10==7){
        return 1+ count(x/10);
    }else{
        return 0 + count(x/10);
    }
}
int main(){
    int x;
    cout<<"Enter the number \n";
    cin>>x;
    int sum=count(x);
    cout<<sum;
}
