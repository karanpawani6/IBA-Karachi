#include<iostream>
using namespace std;
int main(){
double a[4]={2, 4.5 , 0.6, 8.9};
for(int i=0;i<3;i++){
    if(a[i]<a[i+1]){

    }else{
        cout<<"false";
        return 0;
    }
}
cout<<"true";
return 0;
}