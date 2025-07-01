#include <iostream>
using namespace std;

int main() {
    int a, r = 0, b;

   
    cout << "Enter an integer: "<<endl;
    cin >> a;

    b = a; 

    while (a!= 0) {
        int digit = a % 10; 
        r = r* 10 + digit; 
        a =a/10; 
    }


    cout << "Reversed number of " <<b<< " is " <<r << endl;

    return 0;
}
