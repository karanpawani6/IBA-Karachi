#include <iostream>
#include <algorithm>
#include <numeric>
#include <vector>;
using namespace std;
int main() {
	vector<int> vec = { 1,2,3,4,5,6,7,8,9 };
	cout << accumulate(vec.begin(), vec.end(), 0);
	return 0;
}