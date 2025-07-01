#include <iostream>
using namespace std;

int main() {
    int arr[3][3];
    int sum = 0, c1 = 0, c2 = 0, c3 = 0;
    int r1 = 0, r2 = 0, r3 = 0;

    // Fixed initialization of loop variables
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            cout << "ENTER NUMBER for position [" << i << "][" << j << "]: " << endl;
            cin >> arr[i][j];  // Changed from arr[3][3] to arr[i][j]
            
            sum += arr[i][j];

            // Row sum calculations
            switch(i) {
                case 0:
                    r1 += arr[i][j];
                    break;
                case 1:
                    r2 += arr[i][j];
                    break;
                case 2:
                    r3 += arr[i][j];
                    break;
            }

            // Column sum calculations
            switch(j) {
                case 0:
                    c1 += arr[i][j];
                    break;
                case 1:
                    c2 += arr[i][j];
                    break;
                case 2:
                    c3 += arr[i][j];
                    break;
            }
        }
    }

    // Output the results
    cout << "Total sum = " << sum << endl;
    cout << "Total sum R1 = " << r1 << endl;
    cout << "Total sum R2 = " << r2 << endl;
    cout << "Total sum R3 = " << r3 << endl;
    cout << "Total sum C1 = " << c1 << endl;
    cout << "Total sum C2 = " << c2 << endl;
    cout << "Total sum C3 = " << c3 << endl;

    return 0;
}
