#include <iostream>
using namespace std;
int main(){
    int a[7]={1,2,3,4,3,2,1};
    bool r;
    for(int i=0;i<7;i++){
        if(a[i]==a[6-i]){
                r=true;
        }
        else{
            r=false;
            break;
        }
    }
    cout<<boolalpha<<r;
    return 0;
}