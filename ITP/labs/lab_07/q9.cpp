#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the number\n";
    cin>>n;
    if(n>1 || n<-1){
    for(int i=2;i<n;i++){
        if(n%i==0){
            cout<<"not prime";
            return 0;
        }
    }
    cout<<"prime";
    }else{
        cout<< "not prime";
    }
    
    return 0;
    }
