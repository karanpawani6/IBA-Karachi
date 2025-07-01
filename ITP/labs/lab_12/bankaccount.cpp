#include<iostream>
using namespace std;
struct bank_account{
    int account_number;
    string account_holder_name;
    float balance;
};
void deposit(bank_account& s1){
    int deposit;
  cout<<"how much you want to deposit\n";
       cin>>deposit;
       s1.balance+=deposit;
       cout<<"your current balance is!\n";
        cout<<s1.balance<<endl;;
}
void withdraw(bank_account& s1){
    float withdraw;
    cout<<"Enter the amount you want to withdraw\n";
    cin>>withdraw;
    if(withdraw<=s1.balance){
        s1.balance-=withdraw;
    }else{
        cout<<"Insufficient balance\n";
    }
    cout<<"your current balance is!\n";
        cout<<s1.balance<<endl;
}
int main(){
       bank_account s1;
       int choice;
       s1.account_holder_name ="Karan";
       s1.account_number = 12345678;
       s1.balance = 5000;
       
       while(choice!=3){
        cout<<"What you want\n";
       cout<<" 1. deposit, 2. withdraw, 3. Exit\n";
       cin>>choice;
        switch (choice){
        case 1:
            deposit(s1);
            break;
        case 2:
             withdraw(s1);
             break;
       }
       }
    return 0;
}