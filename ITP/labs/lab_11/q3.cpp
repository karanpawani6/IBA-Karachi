#include <iostream>
#include <cstring>

using namespace std;

int main() {
    char *str1, *str2, *result;
    int len1, len2;
    cout << "Enter the first string: ";
    string input1;
    getline(cin, input1); 
    len1 = input1.length();
    str1 = new char[len1 + 1]; 
    for (int i = 0; i < len1; i++) {
        str1[i] = input1[i];  
    }
    str1[len1] = '\0';  
    cout << "Enter the second string: ";
    string input2;
    getline(cin, input2); 
    len2 = input2.length();
    str2 = new char[len2 + 1]; 
    for (int i = 0; i < len2; i++) {
        str2[i] = input2[i]; 
    }
    str2[len2] = '\0';  
    result = new char[len1 + len2 + 1]; 
    strcpy(result, str1);  
    strcat(result, str2);  
    cout << "Concatenated string: " << result << endl;
    delete[] str1;  
    delete[] str2;  
    delete[] result; 

    return 0;
}
