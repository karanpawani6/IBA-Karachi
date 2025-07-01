#include <iostream>
#include <string>
#include <cassert>

using namespace std;

class RAStack {
private:
    int sz; // denotes the number of elements in the stack
    int cap; // denotes the capacity of the stack
    string* arr = nullptr;

public:
    RAStack() : sz{ 0 }, cap{ 2 }, arr{ new string[cap] } {
    }

    ~RAStack() {
        delete[] arr;
    }

    void push(string s) {
        if (sz == cap) resize(2 * cap); // double the capacity if the stack is full
        arr[sz++] = s;  // same as a[N] = s; N++;
    }

    string pop() {
        assert(sz > 0); // stack must not be empty
        string topElement = arr[--sz];  // Store the element before reducing size
        
        if (sz > 0 && sz == cap / 4 && cap / 2 >= 2) // Prevent shrinking too much
            resize(cap / 2);

        return topElement;
    }

    bool empty() { return sz == 0; }

    int size() { return sz; }

private:
    void resize(int newcap) {
        assert(newcap >= sz); // new capacity must be greater than or equal to the number of elements in the stack
        string* newarr = new string[newcap];
        for (int i = 0; i < sz; ++i)
            newarr[i] = arr[i];
        delete[] arr;
        arr = newarr;
        cap = newcap;
    }

};

int main() {
    RAStack stack;
    string s1 = "[{{({})}}]";
    for (int i = 0; i < s1.length(); i++) {
        char ch = s1[i];
        if (ch == '[' || ch == '{' || ch == '(') {
            stack.push(string(1, ch));
        }
        else {
            if (stack.empty()) {
                cout << "False" << endl;
                return 0;
            }
            char top = stack.pop()[0];
            if((top == '[' && ch != ']') || (top == '{' && ch != '}') || (top == '(' && ch != ')') ){
                cout << "false" << endl;
                return 0;
            }

        }
    }
    if (stack.empty()) {
        cout << "true" << endl;
    }
    else {
        cout << "false" << endl;
    }
    return 0;
}