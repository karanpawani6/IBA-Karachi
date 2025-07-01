#include <iostream>
#include <algorithm>
#include <string>
#include <vector>;
using namespace std;
class product {
public:
	string name;
	string category;
	float price;
	int quantity_in_stock;
	product(string n, string c, float p, int q) :name{ n }, category{ c }, price{ p }, quantity_in_stock{ q } {};
	void display() {
		cout << "Name: " << name << ", Category: " << category << ", Price: " << price << ", quantity in stock: " << quantity_in_stock << endl;
	}
};
class comparebyprice {
public:
	bool operator()(product p1, product p2) {
		return p1.price < p2.price;
	}
};
class comparebyquantity {
public:
	bool operator()(product p1, product p2) {
		return p1.quantity_in_stock < p2.quantity_in_stock;
	}
};
class apply_price_increase {
public:
	void operator()(vector<product>& p, int amount) {
		for (int i = 0; i < p.size(); i++) {
			p[i].price += amount;
		}
	}
};
int main() {
	int choice;
	product p1("DEll", "Electronics", 50000, 5);
	product p2("SAMSUNG", "Mobile Device", 60000, 10);
	product p3("Chair", "Furniture", 3000, 43);
	product p4("Facewash", "Skin Care", 1500, 12);
	vector<product> products = { p1,p2,p3,p4 };
	cout << "What you want to perform?\n1.sorting\t2.price increase\n";
	cin >> choice;
	if (choice == 1) {
		int sortchoice;
		cout << "Which type of sort you want to perform?\n1.By price\t2.By quantity" << endl;
		cin >> sortchoice;
		if (sortchoice == 1) {
			sort(products.begin(), products.end(), comparebyprice());
			for (auto m : products) {
				m.display();
			}
		}
		else if (sortchoice == 2) {
			sort(products.begin(), products.end(), comparebyquantity());
			for (auto m : products) {
				m.display();
			}
		}
	}
	else if (choice == 2) {
		int increse_amount;
		cout << "How much amount you want to increase\n";
		cin >> increse_amount;
		cout << "Before price increase\n";
		for (auto m : products) {
			m.display();
		}
		apply_price_increase()(products, increse_amount);
		cout << "after price increse\n";
		for (auto m : products) {
			m.display();
		}
	}
	return 0;
};