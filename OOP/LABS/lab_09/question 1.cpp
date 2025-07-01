#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
struct employee {

	string name;
	int age;
	float salary;
	int yearofexperiences;
	void display() {
		cout << "Employee name: " << name << "\tsalary: " << salary << "\tage: " << age << "\t experience:" << yearofexperiences << " years" << endl;
	}
};
void filterBySalaryRange(int min, int max, vector<employee>& vec) {
	for (int i = 0; i < vec.size(); i++) {
		if (vec[i].salary > min && vec[i].salary < max) {
			vec[i].display();
		}
	}
}
void  filterByExperienceRange(int min, int max, vector<employee>& vec) {
	for (int i = 0; i < vec.size(); i++) {
		if (vec[i].yearofexperiences > min && vec[i].yearofexperiences < max) {
			vec[i].display();
		}
	}
}
void filter(void(*ptr)(int, int, vector<employee>&), int min, int max, vector<employee>& vec) {
	ptr(min, max, vec);
}
bool sortbyage(employee e1, employee e2) {
	return e1.age < e2.age;
}
bool sortbysalary(employee e1, employee e2) {
	return e1.salary < e2.salary;
}
bool sortbyyear(employee e1, employee e2) {
	return e1.yearofexperiences < e2.yearofexperiences;
}

int main() {
	int choice, sortchoice, min, max;
	int filterchoice;
	employee e1 = { "karan", 19, 100000, 5 };
	employee e2 = { "shivam", 20, 12000, 8 };
	employee e3 = { "aftab", 17, 90000, 10 };
	vector<employee> vec = { e1,e2,e3 };
	cout << "what you want to do?\n1.filter \t 2.Sort\n";
	cin >> choice;
	if (choice == 1) {
		cout << "on what basis you want to filter \n1.salary\t2.experience\n";
		cin >> filterchoice;
		cout << "Enter the minimum range\n";
		cin >> min;
		cout << "Enter the maximum range\n";
		cin >> max;
		if (filterchoice == 1) {
			filter(filterBySalaryRange, min, max, vec);
		}
		else if (filterchoice == 2) {
			filter(filterByExperienceRange, min, max, vec);
		}
	}
	else if (choice == 2) {
		cout << "ON what basis you you want sort\n1.Age\t2.Salary\t3.years of experience\n";
		cin >> sortchoice;

		if (sortchoice == 1) {
			cout << "sort by age\n";
			sort(vec.begin(), vec.end(), sortbyage);
			for (auto m : vec) {
				m.display();
			}
		}

		else if (sortchoice == 2) {
			cout << "sort by salary\n";
			sort(vec.begin(), vec.end(), sortbysalary);
			for (auto m : vec) {
				m.display();
			}
		}

		else if (sortchoice == 3) {
			cout << "sort by years of experience\n";
			sort(vec.begin(), vec.end(), sortbyyear);
			for (auto m : vec) {
				m.display();
			}
		}

	}
	return 0;
}