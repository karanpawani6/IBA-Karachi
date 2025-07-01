#include <iostream>
using namespace std;
int main(){
    string a[9]={"one","two","three","four","five","six","seven","eight","nine"};
    string b[9];
    for(int i=0;i<9;i++){
        b[8-i]=a[i];
    }
    for(int j=0;j<9;j++){
        cout<<b[j]<<" ";
    }
    return 0;
}