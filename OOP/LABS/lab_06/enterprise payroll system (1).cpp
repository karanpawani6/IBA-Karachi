#include<iostream>
using namespace std;
class person {
private:
	string name;
	int personID;
	int age;
public:
	person(string name, int personid, int age) {
		this->name = name;
		this->personID = personid;
		this->age = age;
	}
	virtual void displayinfo() {
		cout << endl;
		cout << "name: " << name << endl;
		cout << "personID: " << personID << endl;
		cout << "Age: " << age << endl;
	}
};
class employee : public person {
private:
	double basesalary;
	int yearsofexperience;
	string department;
public:
	employee(string name, int personID, int age, double basesalary, int experience, string department) : person(name, personID, age) {
		this->yearsofexperience = experience;
		this->basesalary = basesalary;
		this->department = department;
	}
	virtual double calculatesalary() {
		if (this->yearsofexperience >1 && this->basesalary<=5) {
			return (this->basesalary * 1.10);
		}
		else if(this->yearsofexperience>5 && this->yearsofexperience<=10) {
			return (this->basesalary * 1.20);
		}
		else if (this->yearsofexperience > 10 && this->yearsofexperience < 20) {
			return (this->basesalary * 1.30);
			}
	}
	void displayinfo() override {
		person::displayinfo();
		cout << "years of experience: " << yearsofexperience << endl;
		cout << "department: " << department << endl;
		cout << "base salary: " << basesalary << endl;
	}
};
class jobrole : public employee {
private:
	string jobtitle;
public:
	jobrole(string name, int personID, int age, double basesalary, int experience, string department, string jobtitle) :employee(name, personID, age, basesalary, experience, department) {
		this->jobtitle = jobtitle;
	}
	double calculatesalary()override {
		if (jobtitle == "salaried") {
			return (employee::calculatesalary() * 1.10);
		}
		else if(jobtitle == "hourly"){
			return (employee::calculatesalary() * 1.20);
		}
	}
	void displayinfo() override {
		employee::displayinfo();
		cout << "JOB title: " << jobtitle << endl;
		cout << "final salary: " << calculatesalary() << endl;
	}
};
int main() {
	jobrole* ptr[2] = { new jobrole("karan",123,20,100000,7,"CS","hourly"),new jobrole("shivam",623,20,120000,12,"CS","salaried") };
	for (int i = 0;i < 2;i++) {
	     ptr[i]->displayinfo();
	}
	for (int i = 0;i < 2; i++) {
		delete ptr[i];
	}
}