#include <iostream>
#include <exception>
#include <stdexcept>
using namespace std;
class insufficientbalance : public exception {
public:
	const char* what() const noexcept override {
		return "insufficient balance";
	}
};
class invalidamount : public exception {
public:
	const char* what() const noexcept override {
		return "invalid amount";
	}
};
class accountnotfound : public exception {
public:
	const char* what() const noexcept override {
		return "Account not exist";
	}
};
class bankaccount {
private:
	int account_number;
	double balance;
	string name;
public:
	bankaccount() = default;
	bankaccount(int account_number, double balance, string name) {
		this->account_number = account_number;
		this->balance = balance;
		this->name = name;
	}
	void withdraw(double amount) {
		if (amount > balance) {
			throw insufficientbalance();
		}
		else if (amount < 0) {
			throw invalidamount();
		}
		balance -= amount;
		cout << "Withdraw " << amount << " from " << "account" << " current balance " << balance << endl;
	}
	void deposit(double amount) {
		if (amount < 0) {
			throw invalidamount();
		}
		balance += amount;
		cout << "Deposit " << amount << " to " << "account" << " current balance: " << balance << endl;
	}
	void transfer(bankaccount& target, double amount) {
		if (target.account_number <= 0) {
			throw accountnotfound();
		}
		if (amount < 0) {
			throw invalidamount();
		}
		if (amount > balance) {
			throw insufficientbalance();
		}
		target.deposit(amount);
		balance -= amount;
		cout << "successfully " << amount << " amount tansfer to " << target.account_number << " acount\n";
	}
};
int main() {
	bankaccount b2(0, 122, "unknown");
	try
	{
		bankaccount b1(123, 120000, "karan");
		b1.deposit(100);
		b1.withdraw(12200);
		b1.transfer(b2, 500);
	}
	
	catch (const invalidamount& e) {
		cout << e.what() << endl;
	}
	catch (const insufficientbalance& e) {
		cout << e.what() << endl;
	}
	catch(const accountnotfound & e) {
		cout << e.what() << endl;
	}
	
}