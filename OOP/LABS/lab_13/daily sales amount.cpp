#include <iostream>
#include <vector>
using namespace std;
template<typename T>
int partition(vector<T>& arr, int start, int end) {
	int i = start, j = end + 1;
	T pivot = arr[start];
	while (true) {
		while (arr[++i] > pivot)
			if (i == end) break;
		
		while (pivot > arr[--j])
		if (j == start) break;
		 
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
	vector<float> arr = { 99.99, 120.5, 35.75, 85.0, 150.25 };
	int start = 0;
	int end = arr.size() - 1;
	int mid = start + (end - start) / 2;
	quicksort(arr, 0, arr.size() - 1);
	for (auto m : arr) {
		cout << m << " ";
	}
	return 0;

}