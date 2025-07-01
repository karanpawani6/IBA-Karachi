#include<iostream>
#include<string>
using namespace std;
struct employee{
int ID;
string name;
float salary;
};
void create_employee(employee* array,int size){
  cout<<"Enter the data of employees\n";
   for(int i=0;i<size;i++){
     cout<<"Enter the ID of the employee\n";
     cin>>array[i].ID;
     cout<<"Enter the name of the employee\n";
     cin>>array[i].name;
     cout<<"Enter the salary of the employee\n";
     cin>>array[i].salary;
   }
}
   employee highsalaryemployee(employee* array,int size){
     employee rich;
     rich.salary=0;
     for(int i=0;i<size;i++){
        if(rich.salary<array[i].salary){
            rich=array[i];
        }
     }
   return rich;
}
int main(){
  employee array[3];
  int size = sizeof(array)/sizeof(array[0]);
    create_employee(array,size);
    employee high_salary=highsalaryemployee(array,size);
    cout<<"The highest salary employee!\n";
    cout<<"ID = "<<high_salary.ID<<", Name = "<<high_salary.name<<", salary = "<<high_salary.salary;
    return 0;
}