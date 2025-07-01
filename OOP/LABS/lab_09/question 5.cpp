#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
	vector<int> vec = { 1,2,3,4,5,7,8,9 };
	vector<int> result(vec.size());
	transform(vec.begin(), vec.end(), result.begin(), [](int x) {return x / 2; });
	for (auto m : result) {
		cout << m << " ";
	}
	return 0;
}