#include <iostream>
#include <string>
using namespace std;
int main(){
string names;
int marks;
int sum =0;
int avg =0;
while(cin>>names>>marks){
sum++;
avg+=marks;

}
cout<<"total number of students is "<<sum;
cout<<"the average of student's marks is "<<avg/sum;
return 0;
}