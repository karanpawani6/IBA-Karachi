#include <iostream>
#include <vector>
using namespace std;
bool compare(string& a, string& b) {
	if (a.length() < b.length()) return true;
	else if (a.length() > b.length()) return false;
	else return a < b;
}
template<typename T>
int partition(vector<T>& arr, int start, int end) {
	int i = start, j = end + 1;
	T pivot = arr[start];
	while (true) {
		do{ i++; } while (i < end && compare(arr[i] , pivot));
		do { j--; } while (j > start && compare(pivot, arr[j]));

		if (i >= j) break;
		swap(arr[i], arr[j]);
	}
	swap(arr[start], arr[j]);
	return j;
}
template<typename T>
void quicksort(vector< T >& arr, int start, int end) {
	if (start >= end) return;
	int j = partition(arr, start, end);
	quicksort(arr, start, j - 1);
	quicksort(arr, j + 1, end);
}
int main() {
	vector<string> arr = { "Apple", "Banana", "Orange", "Peach", "Pineapple" };
	int start = 0;
	int end = arr.size() - 1;
	int mid = start + (end - start) / 2;
	quicksort(arr, 0, arr.size() - 1);
	for (auto m : arr) {
		cout << m << " ";
	}
	return 0;

}