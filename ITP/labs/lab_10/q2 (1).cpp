#include<iostream>
using namespace std;
void swap_elements(int& x,int& y){
            int temp = x;
              x=y;
              y=temp;
            return ;
}
int main(){
    int x,y;
    int arr[]={1,2,3,4,5};
    cout<<"Enter the indices you want to swap\n";
    cin>>x>>y;
    swap_elements(arr[x],arr[y]);
    for(int i=0;i<5;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}