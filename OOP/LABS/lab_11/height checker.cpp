#include <iostream>
#include <vector>
using namespace std;
void count_sort(vector<int>& arr) {
    vector<int> sorted_array(arr.size());
    int max = arr[0];
    int Csum = 0;
    int difference = 0;
    for (int i = 0; i < arr.size(); i++) {
        if (max < arr[i]) max = arr[i];
    }
    vector<int> count_array(max + 1, 0);
    for (int i = 0; i < count_array.size(); i++) {
        int count = 0;
        for (int j = 0; j < arr.size(); j++) {
            if (arr[j] == i) count++;
        }
        count_array[i] = count;
    }
    for (int i = 0; i < count_array.size(); i++) {
        Csum += count_array[i];
        count_array[i] = Csum;
    }
    for (int i = sorted_array.size() - 1; i > -1; i--) {
        sorted_array[--count_array[arr[i]]] = arr[i];
    }
    for (int i = 0; i < arr.size(); i++) {
        if (sorted_array[i] != arr[i]) difference++;
    }
    cout << difference << endl;
}
int main() {
    vector<int> height = { 1, 1, 4, 2, 1, 3 };
    count_sort(height);
    return 0;
}