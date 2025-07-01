#include <iostream>
#include <stdexcept>
using namespace std;

void buy_tickets(int age) {
	if (age < 13) {
		throw invalid_argument("invalid_argument");
	}
	else {
		cout << "Ticket purchased successfully! Enjoy the movie." << endl;
	}
}
int main() {
	int age;
	cout << "Enter your age\n";
	cin >> age;
	try
	{
		buy_tickets(age);
	}
	catch (const std::exception& e)
	{
		cout << "Caught an exception: " << e.what() << "\n";
	}
}