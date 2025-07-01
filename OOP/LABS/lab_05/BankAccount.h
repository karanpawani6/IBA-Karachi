#include<iostream>
#include<vector>
#include<string>
using namespace std;
#ifndef BankAccount_H
#define BankAccount_H
class bankaccount {
private:
	string accountholder;
	int accountnumber;
	float accountbalance;
	vector<string> transactionlog;
public:
	bankaccount(string name, int num, float balance);
	void deposit(float ammount);
	void withdraw(float ammount);
	void displayaccountdetails();
	void transactionhistory();
	
};
#endif // !BankAccount_H;

