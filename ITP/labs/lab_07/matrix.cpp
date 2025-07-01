#include <iostream>
using namespace std;

int main() {
    int m = 4, n = 4;
    int a[4][4] = { {10,23,5,6},
                    {5, 0, 7, 8},
                    {1, 1, 0, 1},
                    {6,4,3,0} };
    cout << "Original matrix:" << endl;
    for (int i = 0; i < m; ++i) {
        for (int j = 0; j < n; ++j) {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
    bool firstRowHasZero = false, firstColHasZero = false;
    for (int j = 0; j < n; ++j) {
        if (a[0][j] == 0) {
            firstRowHasZero = true;
            break;
        }
    }
    for (int i = 0; i < m; ++i) {
        if (a[i][0] == 0) {
            firstColHasZero = true;
            break;
        }
    }
    for (int i = 1; i < m; ++i) {
        for (int j = 1; j < n; ++j) {
            if (a[i][j] == 0) {
                a[i][0] = 0; 
                a[0][j] = 0; 
            }
        }
    }
    for (int i = 1; i < m; ++i) {
        if (a[i][0] == 0) {
            for (int j = 1; j < n; ++j) {
                a[i][j] = 0;
            }
        }
    }
    for (int j = 1; j < n; ++j) {
        if (a[0][j] == 0) {
            for (int i = 1; i < m; ++i) {
                a[i][j] = 0;
            }
        }
    }
    if (firstRowHasZero) {
        for (int j = 0; j < n; ++j) {
            a[0][j] = 0;
        }
    }
    if (firstColHasZero) {
        for (int i = 0; i < m; ++i) {
            a[i][0] = 0;
        }
    }
    cout << "\nMatrix after setting rows and columns to 0:" << endl;
    for (int i = 0; i < m; ++i) {
        for (int j = 0; j < n; ++j) {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}