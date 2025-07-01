#include<iostream>
#include "BankAccount.h"
int main() {
	bankaccount b1("Karan", 30212, 10000);
	b1.deposit(20);
	b1.displayaccountdetails();
	b1.withdraw(10);
	b1.displayaccountdetails();
	b1.transactionhistory();
	return 0;
}