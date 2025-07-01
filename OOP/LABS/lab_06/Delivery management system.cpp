#include<iostream>
#include <string>
using namespace std;
class packages {
public:
	string name;
	string address;
	string city;
	string state;
	int zipcode;
	double weight;
	double perounce;
public:
	packages(string n, string a, string c, string s, int z, double w, double o) {
		name = n;
		address = a;
		city = c;
		state = s;
		zipcode = z;
		if (w > 0 && 0 > 0) {
			weight = w;
			perounce = o;
		}
		else {
			weight = 1;
			perounce = 1;
		}
	}
	double get_weight() {
		return weight;
	}
	double get_costperounce() {
		return perounce;
	}
	virtual double calculate_cost() {
		return weight * perounce;
	}
};
class twodaypackage : public packages {
private:
	double flatfee;
public:
	twodaypackage(string n, string a, string c, string s, int z, double w, double o, double f) :packages(n, a, c, s, z, w, o) {
		flatfee = f;
	}
	double calculate_cost() override {
		return packages::calculate_cost() + flatfee;
	}
};
class overnightpackage :public packages {
private:
	double extrafee = 100;
public:
	overnightpackage(string n, string a, string c, string s, int z, double w, double o) : packages(n, a, c, s, z, w, o) {};
	double calculate_cost() override {
		return get_weight() * (get_costperounce() + extrafee);
	}
};
int main() {

	packages* ptr[3] = { new twodaypackage("karan","IBA hostel","karachi","urban",123,20,100,300),new overnightpackage("arham","colony","bhawalpur","punjab",321,500,200),new packages("shivam","chandu ram colony","ghotki","sindh",456,567,198) };
	for (int i = 0; i < 3; i++) {
		cout << "name: " << ptr[i]->name << endl;
		cout << "Address: " << ptr[i]->address << endl;
		cout << "city: " << ptr[i]->city << endl;
		cout << "state: " << ptr[i]->state << endl;
		cout << "zipcode: " << ptr[i]->zipcode << endl;
		cout << "cost per ounce: " << ptr[i]->perounce << endl;
		cout << "total cost: " << ptr[i]->calculate_cost() << endl;
		cout << endl;
	}
}