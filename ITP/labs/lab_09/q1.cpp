#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
vector<int>working(vector <int> x,vector<int> y){
    vector<int> v3;
    x.insert(x.end(),y.begin(),y.end());
    sort(x.begin(),x.end());
    for(int i=0;i<x.size();i++){
        if(v3.empty()|| x[i]!=v3.back()){
            v3.push_back(x[i]);
        }
    }
    return v3;

}
int main(){
         vector<int> v1 = {1,2,3,4,5};
         vector<int> v2 = {2,3,7,8,9};
         vector<int> result = working(v1,v2);
         for(int i=0;i<result.size();i++){
            cout<<result[i]<<" ";
         }
          
    return 0;
}