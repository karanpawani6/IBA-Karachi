#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;
int main(){
    srand(time(0));
int row, cols;
cout<<"Enter the number of rows\n";
cin>>row;
cout<<"Enter the number of columns\n";
cin>>cols;
int **matrix=   new int*[row];
for(int i=0;i<row;i++){
    matrix[i]=new int[cols];
}
for(int i=0;i<row;i++){
    for(int j=0;j<cols;j++){
        matrix[i][j]= rand();
    }
}
for(int i=0;i<row;i++){
    for(int j=0;j<cols;j++){
        cout<<matrix[i][j]<<" ";
    }
    cout<<endl;
}
for(int i=0;i<row;i++){
    delete[] matrix[i];
}
delete[] matrix;
    return 0;
}