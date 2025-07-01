#include<iostream>
#include<vector>
using namespace std;
double percent(vector<int> v1){
    double sum;
for(int i=0;i<v1.size();i++){
    if(v1[i]%2==0){
        sum++;
    }
}
double probality=(sum/v1.size());
return probality;
}
int main(){
    int size, x;
    cout<<"enter the size of vector\n";
    cin>>size;
    vector<int> v1(size);
    cout<<"enter the elements of vector\n";
    for(int i=0;i<size;i++){
      cin>>x;
      v1[i]=x;
    }
    for(int i=0;i<size;i++){
        cout<<v1[i]<<" ";

    }
    cout<<"the even percentage is "<<percent(v1);
    return 0;
    
}