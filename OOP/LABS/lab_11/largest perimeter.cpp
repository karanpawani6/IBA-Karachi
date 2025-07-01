#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int sum = 0;
int perimeter(int a, int b, int c) {
	if (sum < a + b + c) sum = a + b + c;
	return sum;
}
void valid(vector<int>& arr) {
	int valid_sum = 0;
	for (int i = 0; i < arr.size() - 2; i++) {
		if (arr[i + 2] + arr[i + 1] > arr[i]) {
		    valid_sum = perimeter(arr[i], arr[i + 1], arr[i + 2]);
		}
	  }
	if (valid_sum == 0) {
		cout << "Invalid" << endl;
	}
	else {
		cout << valid_sum;
	}
}
int main() {
	vector<int> num = {10,1,2,1};
	for (int i = 0; i < num.size()- 1; i++) {
		for (int j = 0; j < num.size() - 1 - i; j++) {
			if(num[j] < num[j+1]) swap(num[j], num[j + 1]);
		}
	}
	valid(num);
	return 0;
}