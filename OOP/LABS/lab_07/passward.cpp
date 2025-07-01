#include <iostream>
#include <string>
using namespace std;

void checkPassword(const string& password) {
	if (password.size() < 8) {
		throw runtime_error(" Password is too short. It must be at least 8 characters long.");
	}
	else {
		for (int i = 0; i < password.size(); i++) {
			if (isdigit(password[i])) {
				cout << " Password is strong and valid.\n";
				return;
			}
			else {
				throw runtime_error(" Password must contain at least one digit.");
			}
		}
	}
}
int main() {
	string passward;
	cout << "Enter the passward\n";
	getline(cin, passward);
	try
	{
		checkPassword(passward);
	}
	catch (const std::exception& e)
	{
		cout << e.what();
	}
}