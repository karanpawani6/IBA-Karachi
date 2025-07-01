#include<iostream>
using namespace std;
int main(){
    int size;
    cout<<"Enter the size of an array\n";
    cin>>size;
    int *array = new int[size];
    cout<<"Enter the elements\n";
    for(int i=0;i<size;i++){
        cin>>array[i];
    }
    cout<<"original array\n";
     for(int i=0;i<size;i++){
        cout<<array[i]<<" ";
    }
    cout<<endl;
    for(int i=0;i<size;i++){
        for(int j=0;j<size-i-1;j++){
            if(array[j]>array[j+1]){
                int temp=array[j+1];
                array[j+1]=array[j];
                array[j]=temp;
            }
        }
    }
    cout<<"sorted array\n";
    for(int i=0;i<size;i++){
        cout<<array[i]<<" ";
    }
    delete[]array;
    
    return 0;
}