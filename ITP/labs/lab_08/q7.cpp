#include<iostream>
#include<vector>
using namespace std;
bool CanBalance(vector<int>vec){
    int sum = 0;
    int sum2 = 0;
    for(int i = 0; i< vec.size(); i++){
        sum += vec[i];
    }
    if(sum % 2 != 0){
        return false;
    }
    else{
    for(int i = 0; i<vec.size()-1; i++){
        sum2 += vec[i];
        if(sum2 == sum/2){
            return true;
        } 
        else if(sum2>sum/2){
            return false;
        }
        /*else{
            sum2 += vec[i+1];
            if(sum2>sum/2 ){
                return false;
            }
            else{
            return true;
            }
        }*/
    }
    }
}
int main(){
    vector<int>vec = {1,1,1,5};
    cout<<CanBalance(vec);
    
}