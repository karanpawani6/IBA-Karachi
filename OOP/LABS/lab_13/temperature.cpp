#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
template<typename T>
int partition(vector<T>& arr, int start, int end) {
    int i = start, j = end + 1;
    T pivot = arr[start];
    while (true) {
        while (arr[++i] < pivot)
            if (i == end) break;

        while (pivot < arr[--j])
            if (j == start) break;

        if (i >= j) break;
        swap(arr[i], arr[j]);
    }
    swap(arr[start], arr[j]);
    return j;
}
template<typename T>
void quick_sort(vector<T>& arr, int start, int end) {
    if (start >= end) return;
    int j = partition(arr, start, end);
    quick_sort(arr, start, j - 1);
    quick_sort(arr, j + 1, end);
}
int main() {
    vector<float> arr = { 12.5,-3.2, 7.0, 0.0, 22.3, 15.4,-1.0 };
    swap(arr[0], arr[arr.size() - 1]);
    quick_sort(arr, 0, arr.size() - 1);
    for (auto m : arr) {
        cout << m << " ";
    }
    return 0;
}