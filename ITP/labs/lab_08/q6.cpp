#include<iostream>
#include<vector>
using namespace std;
bool can_balance(vector<int>v1,vector<int>v2){
    if(v1.size()==v2.size()){
        for(int i=0;i<v1.size();i++){
            if(v1[i]!=v2[i]){
                return false;
            }
        }
        return true;
    }else{
        return false;
    }
}
int main(){
    vector<int>v1={1,3,0,7};
    vector<int>v2={1,3,5,7};
    cout<<can_balance(v1,v2);
    return 0;
}