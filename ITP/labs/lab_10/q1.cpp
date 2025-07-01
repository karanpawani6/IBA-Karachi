#include<iostream>
using namespace std;
int*max_array(int arr[4][4]){
       static int result[4];
       for(int i=0;i<4;i++){
        result[i]=arr[i][0];
       }
       for(int i=0;i<4;i++){
        for(int j=0;j<4;j++){
            if(result[i]<arr[i][j]){
                result[i]=arr[i][j];
            }
        }
       }
       return result;
}
int main(){
    int arr[4][4]={{-3,-5,-7,-2},{1,6,4,8},{9,2,3,5},{4,8,1,7}};
    int *result =max_array(arr);
    for(int i=0;i<4;i++){
        cout<<result[i]<<" ";
    }
}