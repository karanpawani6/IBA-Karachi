#include <iostream>
#include <functional>
#include <vector>
#include <algorithm>
using namespace std;

class item {
public:
	string name;
	int ID;
	item(string name, int id) : name(name), ID(id) {};
	bool operator<(const item& student) {
		return this->ID < student.ID;
	}
	void draw() {
		cout << "Name: " << name << "\t ID: " << ID << endl;
	}
};

class compare_by_functor {
public:
	bool operator()(const item& a ,const item &b) {
		return a.ID > b.ID;
	}
};
bool compare_by_Fpointer(const item& a,const  item& b) {
	return a.name < b.name;
}

template<typename T>
void mysort(vector<T>& arr, function<bool(const T&, const T&)> comp = nullptr) {
	if (comp) {
		for (int i = 0; i < arr.size(); i++) {
			int min = i;
			for (int j = i; j < arr.size(); j++) {
				if (comp(arr[j], arr[min])) min = j;
			}
			swap(arr[min], arr[i]);
		}
	}
	else {
		for (int i = 0; i < arr.size(); i++) {
			int min = i;
			for (int j = i; j < arr.size(); j++) {
				if (arr[j] < arr[min]) min = j;
			}
			swap(arr[min], arr[i]);
		}
	}
};
int main() {
	item I1("karan", 30212);
	item I2("shivam", 30012);
	item I3("rajnesh", 30011);
	item I4("bob", 23901);

	compare_by_functor c;

	vector<item> items;
	items.push_back(I1);
	items.push_back(I2);
	items.push_back(I3);
	items.push_back(I4);


	bool(*ptr)(const item & a, const item & b) = compare_by_Fpointer;

	cout << "sort by defaulat overload operator" << endl;
	mysort(items);

	for (auto m : items){
		m.draw();
	}
	cout << "sort by name(function pointer)" << endl;
	mysort(items, function<bool(const item&, const item&)>(ptr));

	for (auto m : items) {
		m.draw();
	}
	cout << "sort by reverse id (functors)" << endl;
	mysort(items, function<bool(const item& ,const item&)>(c));

	for (auto m : items) {
		m.draw();
	}
	cout << "sort by length of names (lambda functions)" << endl;
	mysort(items, function<bool(const item&, const item&)>([](const item& a, const item& b) {return (a.name.size() < b.name.size()); }));
	
	for (auto m : items) {
		m.draw();
	}
	return 0;
}
