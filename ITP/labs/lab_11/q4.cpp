#include<iostream>
using namespace std;
int main(){
    int row, cols;
    cout<<"Enter the number of rows\n";
    cin>>row;
    cout<<"Enter the number of cols\n";
    cin>>cols;
    int **matrix = new int*[row];
    for(int i=0;i<row;i++){
        matrix[i]= new int[cols];
    }
    cout<<"Enter the elements\n";
    for(int i=0;i<row;i++){
        for(int j=0;j<cols;j++){
            cin>>matrix[i][j];
        }
    }
    int **tranpose = new int*[cols];
    for(int i=0;i<cols;i++){
        tranpose[i]= new int[row];
    }
     for(int i=0;i<cols;i++){
        for(int j=0;j<row;j++){
            tranpose[i][j]=matrix[j][i];
        }
    }
    cout<<"original matrix is!\n";
    for(int i=0;i<row;i++){
        for(int j=0;j<cols;j++){
            cout<<matrix[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<"transpose matrix is!\n";
for(int i=0;i<cols;i++){
        for(int j=0;j<row;j++){
           cout<<tranpose[i][j]<<" ";
        }
        cout<<endl;
    }
    for(int i=0;i<row;i++){
        delete[] matrix[i];
    }
    delete[] matrix;
    for(int i=0;i<cols;i++){
        delete[] tranpose[i];
}    
      delete[] tranpose;
return 0;
}