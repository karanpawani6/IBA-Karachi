#include <iostream>
#include <vector>
#include <cstdlib>
#include <string>
#include <ctime>;
using namespace std;
void merge(vector<int>& arr, int start, int mid, int end) {
	vector<int> aux(arr.size());
	for (int k = start; k <= end; k++) {
		aux[k] = arr[k];
	}
	int i = start, j = mid + 1;
	for (int k = start; k <= end; k++) {
		if (i > mid) arr[k] = aux[j++];
		else if (j > end) arr[k] = aux[i++];
		else if (aux[j] > aux[i]) arr[k] = aux[i++];
		else arr[k] = aux[j++];
	}
};
void sort(vector<int>& arr , int N) {
	for (int size = 1; size < N; size *= 2) {
		for (int start = 0; start < N - size; start += 2 * size) {
			int mid = start + size - 1;
			int end = min(start + size + size - 1, N - 1);
			merge(arr, start, mid, end);
		}
	}
}
void convertinDigit(vector<string>& arr , int N) {
	vector<int> firsthalf(N);
	vector<int> secondhalf(N);
	int firstSum = 0;
	int secondSum = 0;
	for (int i = 0; i < N; ++i) {
		firsthalf[i] = stoi(arr[i]);
		secondhalf[i] = stoi(arr[i + N]);
	}
	cout << "First Half:  ";
	for (auto m : firsthalf) {
		cout << m << " ";
	}
	cout << endl << "Second Half:  ";
	for (auto m : secondhalf) {
		cout << m << " ";
	}
	sort(firsthalf, N);
	sort(secondhalf, N);
	cout << "\nAfter sorting:\nFirst Half ";
	for (int i = 0; i < N; i++) {
		cout << firsthalf[i] << " ";
	}
	cout << "\nSecond half: ";
	for (int i = 0; i < N; i++) {
		cout << secondhalf[i] << " ";
	}
	cout << endl;
	for (int i = 0; i < N; i++) {
		firstSum += firsthalf[i];
		secondSum += secondhalf[i];
	}
	if (firstSum == secondSum) {
		cout << "Sums: " << firstSum << " and " << secondSum << " Equal sums" << endl;
	}
	else if (firstSum > secondSum) {
		cout << "Sums: " << firstSum << " and " << secondSum << " first Half has greater Sum" << endl;
	}
	else {
		cout << "Sums: " << firstSum << " and " << secondSum << " second Half has greater Sum" << endl;
	}
}
int main() {
	srand(time(0));
	int testCases;
	cin >> testCases;
	for(int i = 1 ; i <= testCases ; i++){
		int N;
		cin >> N;
		vector<string> arr(2 * N);
		for (int i = 0; i < 2 * N; i++) {
			arr[i] = to_string(rand() % 10);
		}
		cout << "In "<<i << " test case\nS = ";
		for (auto m : arr) {
			cout << m << " ";
	}
		cout << endl;
		convertinDigit(arr,  N);
	}
	return 0;
}