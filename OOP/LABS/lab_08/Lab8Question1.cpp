


#include <iostream>
#include <stdexcept>

using namespace std;


template <typename T>
T evaluateExpression(T one, T two, char op) {
    switch (op) {
        case '+': return one + two;
        case '-': return one - two;
        case '*': return one * two;
        case '/':
            if (two == 0) {
                throw runtime_error("Error: Division by zero is not allowed.");
            }
            return one / two;
        default:
            throw runtime_error("Error: Invalid operator. Use +, -, *, or /.");
    }
}

int main() {
    try {
        
        cout << "Enter the first number: ";
        double first;
        cin >> first;

        cout << "Enter the second number: ";
        double second;
        cin >> second;

        cout << "Enter operation (+, -, *, /): ";
        char op;
        cin >> op;

        
        double result = evaluateExpression(first, second, op);
        cout << "Result: " << result << endl;
    }
    catch (const runtime_error &e) {
        cout << e.what() << endl;  
    }

    return 0;
}
