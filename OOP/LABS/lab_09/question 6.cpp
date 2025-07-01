#include <iostream>
#include <vector>
#include<algorithm>
using namespace std;
int main() {
	vector<int> vec = { 1,2,3,4,5,6,7,8 };
	vector<int> odds;
	copy_if(vec.begin(), vec.end(), back_inserter(odds), [](int a) { return a % 2 != 0; });
	for (auto m : odds) {
		cout << m << " ";
	}
	return 0;
}