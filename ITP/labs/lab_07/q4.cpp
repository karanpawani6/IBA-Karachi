#include <iostream>
using namespace std;
int main(){
    int a[4][4]={{1,2,3,4},{4,5,6,7},{23,4,5,6},{6,7,8,9}};
    for(int i=0; i<4;i++){
        if(i%2==0){
            for(int j=0;j<4;j++){
                cout<<a[i][j]<<" ";
            }
        }
        else{
            for(int j=3;j>=0;j--){
                cout<<a[i][j]<<" ";
            }
        }
    }
}