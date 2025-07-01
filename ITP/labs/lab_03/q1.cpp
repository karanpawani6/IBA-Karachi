#include <iostream>
using namespace std;
int main(){
char gender;
double lenght;
cout<<"enter your gender and lenght in inches "<<endl;
cin>>gender>>lenght;
if(gender == 'm'){
double w = (lenght*4)-125;
cout<<"your weight is "<<w<<endl;
}
else if (gender =='f'){
double w = (lenght*3.5)-108;
cout<<"your weight is "<<w<<endl;
}else{
    cout<<"invalid gender "<<endl;
}

    return 0;
}