#include <iostream>
#include <string>
using namespace std;

struct course {
    int course_ID = 0;
    string course_name = "";
    int credit = 0;
    int marks[4] = {0};
    int sum = 0;

    float add_marks() {
        for (int i = 0; i < 4; i++) {
            sum += marks[i];
            if(sum>100){
                cout<<"invalid marks\n";
                return 0;
            }
        }
        return sum;
    }
    char calculate_grade() {
        if (sum >= 90) {
            return 'A';
        } else if (sum >= 80 && sum < 90) {
            return 'B';
        } else if (sum >= 70 && sum < 80) {
            return 'C';
        } else if (sum >= 60 && sum < 70) {
            return 'D';
        } else {
            return 'F';
        }
    }
};

struct student {
    int student_id;
    string student_name;
     int num_courses;
    course courses[2]; 

    void gpa() {
        int total_sum = 0;
        int total_credit = 0;
        for (int i = 0; i < num_courses; i++) {
            if(courses[i].calculate_grade()=='A'){
            total_sum += 4 * courses[i].credit;
        }else if(courses[i].calculate_grade()=='B'){
            total_sum += 3* courses[i].credit;
        }else if(courses[i].calculate_grade()=='C'){
            total_sum += 2* courses[i].credit;
        }else if(courses[i].calculate_grade()=='D'){
            total_sum += 1* courses[i].credit;
        }else{
             total_sum+=0;
        }
        total_credit+=courses[i].credit;
    }
    cout<<"Your total GPA is!\n"<<total_sum/total_credit<<endl;
    }
};
  void add_student(student* students,int& size){
    int numbers;
     cout<<"How mant students you want to add\n";
     cin>>numbers;
     for(int i=0;i<numbers;i++){
        cout<<"Enter student ID\n";
        cin>>students[i].student_id;
        cout<<"Enter student name\n";
        cin.ignore();
        getline(cin,students[i].student_name);
        cout<<"enter number of courses students enrolled\n";
        cin>>students[i].num_courses;
        for(int j=0;i<students[i].num_courses;j++){
            cout<<"Enter the course id\n";
            cin>>students[i].courses[j].course_ID;
            cout<<"Enter the course name\n";
            cin.ignore();
            getline(cin,students[i].courses[j].course_name);
            cout<<"Enter the no: of credit hours\n";
            cin>>students[i].courses[j].credit;
            for(int k=0;k<4;k++){
                if(k==0){
            cout<<"Enter the quizes marks\n";
                cin>>students[i].courses->marks[k];
                }else if(k==1){
                    cout<<"Enter the assignment marks\n";
                cin>>students[i].courses->marks[k];
                }else if(k==2){
                    cout<<"Enter the mids marks\n";
                cin>>students[i].courses->marks[k];
                }else if(k==3){
                    cout<<"Enter the final marks\n";
                cin>>students[i].courses->marks[k];
                }
            }
        }
     }
  }
  void display_students_details(student* students,int size ){
    int id;
    cout<<"Enter the student ID";
    cin>>id;
    for(int i=0;i<size;i++){
        if(id==students[i].student_id){
            cout<<"student Id: "<<students[i].student_id<<endl;
            cout<<"student name: "<<students[i].student_name<<endl;
            cout<<"courses in which student enrolled are:\n";
            cout<<"course name\t marks\t grade\n";
            for(int i=0;i<students[i].num_courses;i++){
                cout<<students[i].courses->course_name<<"\t"<<students[i].courses->add_marks()<<"\t"<<students[i].courses->calculate_grade()<<endl;
            }
            cout<<"student total gpa is\n";
            students[i].gpa();

        }
    }
  }

int main() {
    student students[10];
    int choice;
    int size = sizeof(students)/sizeof(students[0]);
    while(choice!=3){
    cout<<"What you want\n";
    cout<<"1. Add Students records\n2.display students record\n3.Exit\n";
    cin>>choice;
        if(choice== 1) add_student(students,size);
            else if(choice==2) display_students_details(students,size);
    };
 return 0;   
}
