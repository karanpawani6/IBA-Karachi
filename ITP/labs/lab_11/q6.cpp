#include <iostream>
#include <cstring> // For strlen()

using namespace std;

int main() {
    cout << "Enter a string: ";

    // Allocate dynamic memory manually
    char* input = new char[1000];
    cin.getline(input, 1000); // Explicitly use cin.getline for manual memory

    int length = strlen(input);
    bool isPalindrome = true;

    for (int i = 0; i < length / 2; ++i) {
        if (input[i] != input[length - i - 1]) {
            isPalindrome = false;
            break;
        }
    }

    if (isPalindrome) {
        cout << "The string is a palindrome." << endl;
    } else {
        cout << "The string is not a palindrome." << endl;
    }

    // Free manually allocated memory
    delete[] input;

    return 0;
}
