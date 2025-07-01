#include <iostream>
using namespace std;
int main(){
    int a[5]={1,2,3,4,5};
    int k=3;
    for(int i=6-k;i<6;i++){
        cout<<a[i]<<" ";

    }
    for(int i=0;i<6-k;i++){
        cout<<a[i]<<" ";
    }
}