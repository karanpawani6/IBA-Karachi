#include <iostream>
#include <ctime>
using namespace std;
int main() {
	srand(time(0));
	for (int i = 1; i <= 100; i++) {
		[]() {cout << rand() % 101 << " "; }();
	}
	return 0;
}