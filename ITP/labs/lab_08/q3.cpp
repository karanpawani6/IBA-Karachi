#include<iostream>
#include<string>
using namespace std;
int count_vowels(string v){
    int count=0;
    for(int i=0;i<v.size();i++){
        if(v[i] == 'a'||v[i]=='e'||v[i]=='i'||v[i]=='o'||v[i]=='u'){
            count++;
        }
    }
    return count;
}
int main(){
string v;
cout<<"enter any word\n";
cin>>v;
cout<<"the number of vowels in a word is "<<count_vowels(v);
}