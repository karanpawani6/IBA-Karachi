#include "BankAccount.h"
bankaccount::bankaccount(string name, int num, float balance) {
	accountholder = name;
	accountnumber = num;
	accountbalance = balance;
}
void bankaccount::deposit(float amount) {
	if (amount >= 0) {
		accountbalance += amount;
		transactionlog.push_back("Deposit amount: " + to_string(amount));
	}
	else {
		cout << "Invalid amount" << endl;
	}
}
void bankaccount::withdraw(float amount) {
	if (amount >= 0) {
		if (amount <= accountbalance && amount >= 0) {
			accountbalance -= amount;
			transactionlog.push_back("Withdraw amount: " + to_string(amount));
		}
		else {
			cout << "Insufficient balance" << endl;
		}
	}
	else {
		cout << "Invalid amount" << endl;
	}
}
void bankaccount::transactionhistory() {
	cout << "Transaction history" << endl;
	for (int i = 0;i < transactionlog.size();i++) {
		cout << transactionlog[i] << endl;
	}
}
void bankaccount::displayaccountdetails() {
	cout << "Account holder: " << accountholder << endl;
	cout << "Account number: " << accountnumber << endl;
	cout << "Balance: " << accountbalance << endl;
}