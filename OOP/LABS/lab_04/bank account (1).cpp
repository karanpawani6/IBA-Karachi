#include <iostream>
#include <string>
using namespace std;

class bankaccount {
private:
    string name;
    int account_number;
    string type;
    float balance_amount;
    static float interest;  

public:
    bankaccount() = default;

    
    bankaccount(string n, int num, string t, float amount, float rate) {
        name = n;
        account_number = num;
        type = t;
        balance_amount = amount;
        interest = rate; 
    }

    bankaccount(const bankaccount& b1) {
        name = b1.name;
        account_number = b1.account_number;
        type = b1.type;
        balance_amount = b1.balance_amount;
        interest = b1.interest;  
    }

   
    void deposit(int value) {
        balance_amount += value;
    }

   
    void withdraw(int value) {
        if (value <= balance_amount) {
            balance_amount -= value;
        }
    }

    
    void display() const {
        cout << "Account Name: " << name << endl;
        cout << "Account Number: " << account_number << endl;
        cout << "Account Type: " << type << endl;
        cout << "Balance: " << balance_amount << endl;
    }

  
    static float displayinterest() {
        return interest;
    }
};


float bankaccount::interest = 0.05f;  

int main() {
    bankaccount b1("Karan", 100000, "Saving", 20000, 0.05f);
    b1.display();
    b1.withdraw(10);
    cout << "Interest Rate: " << bankaccount::displayinterest() << endl;  
    return 0;
}
