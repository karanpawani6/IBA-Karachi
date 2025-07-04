#include <iostream>
using namespace std;

void towerOfHanoi(int n, char source, char auxiliary, char destination) {
    // Base case: If there is only one disk, move it directly from source to destination
    if (n == 1) {
        cout << "Move disk 1 from " << source << " to " << destination << endl;
        return;
    }

    // Recursive case: Move top n-1 disks from source to auxiliary peg
    towerOfHanoi(n - 1, source, destination, auxiliary);

    // Move the nth disk from source to destination
    cout << "Move disk " << n << " from " << source << " to " << destination << endl;

    // Move the n-1 disks from auxiliary to destination peg
    towerOfHanoi(n - 1, auxiliary, source, destination);
}

int main() {
    int n;

    // Get the number of disks from the user
    cout << "Enter the number of disks: ";
    cin >> n;

    // Call the towerOfHanoi function with 'A' as source, 'B' as auxiliary, and 'C' as destination
    towerOfHanoi(n, 'A', 'B', 'C');

    return 0;
}
