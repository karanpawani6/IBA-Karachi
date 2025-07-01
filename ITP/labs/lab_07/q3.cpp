#include<iostream>
#include<string>
using namespace std;
int main(){
    
    string name;
    int sum=0;
    int marks;
    while(cin>>name>>marks){
        cout<<name<< " "<<marks<<endl;
        sum+=marks;

    }
    cout<<sum;

    return 0;
}