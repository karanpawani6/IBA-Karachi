#include<iostream>
using namespace std;
int main(){
    int sum=0,max=0;
int a[10]={1,1,1,1,0,0,1,1,1,0};
for(int i=0;i<9;i++){
    if(a[i]==1){
        sum++;
    }else{
        if(sum>max){
            max=sum;
            sum=0;
        }
    }
}

cout<<"the maximum number of consecutive 1's is "<<max;
    return 0;
}