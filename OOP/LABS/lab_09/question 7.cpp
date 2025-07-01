#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
	vector<int> vec = { 50,40,34,56,76,12,34,76 };
	vec.erase(remove_if(vec.begin(), vec.end(), [](int a) {return a > 50; }), vec.end());
	for (auto m : vec) {
		cout << m << " ";
	}
	return 0;
}