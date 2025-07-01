#include<iostream>
using namespace std;
void printarray(int *ptr,int size){
        int sum=0;
     for(int i=0;i<size;i++){
        cout<<ptr[i]<<" ";
        sum+=ptr[i];
     }
cout<<"\nSum of the elements is "<<sum;
     }
int main(){
int size;
cout<<"Enter the size of an array\n";
cin>>size;
int *ptr =new int[size];
cout<<"Enter the elements\n";
for(int i=0;i<size;i++){
        cin>>ptr[i];
    }

printarray(ptr,size);

delete[] ptr;
ptr = nullptr;
    return 0;
}