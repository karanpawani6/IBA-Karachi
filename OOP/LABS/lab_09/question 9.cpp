#include <iostream>
#include <algorithm>
#include<vector>
using namespace std;
int main() {
	vector < double> vec = { 2.3,5.6,86.8,5.1,0.7,0.08,564.8 };
	sort(vec.begin(), vec.end(), [](int a, int b) {return a > b; });
	for (auto m : vec) {
		cout << m << " ";
	}
	return 0;
}

