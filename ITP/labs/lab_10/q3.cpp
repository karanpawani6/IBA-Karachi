#include<iostream>
using namespace std;
int* concatenate(int *arr,int* arr2){
 static int result[]={};
    for(int i=0;i<4;i++){
        result[i]=arr[i];
    }
    for(int i=4;i<8;i++){
        result[i]=arr2[i-4];
    }
    return result;
}
int main(){
    int arr[]={1,2,3,4};
    int arr2[]={5,6,7,8};
    int *result = concatenate(arr,arr2);
    for(int i=0;i<8;i++){
       cout<<result[i]<<" ";
    }
    return 0;
}