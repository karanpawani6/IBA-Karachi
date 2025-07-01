#include <iostream>
#include <vector>
using namespace std;
void count_sort(vector<int>& arr, int position) {
    vector<int> count_array(10, 0);
    vector<int> sorted_array(arr.size(), 0);
    for (int i = 0; i < 10; i++) {
        int count = 0;
        for (int j = 0; j < arr.size(); j++) {
            if ((arr[j] / position) % 10 == i) count++;
        }
        count_array[i] = count;
    }
    int Csum = 0;
    for (int i = 0; i < count_array.size(); i++) {
        Csum += count_array[i];
        count_array[i] = Csum;
    }
    for (int i = (arr.size() - 1); i > -1; i--) {
        sorted_array[--count_array[(arr[i] / position) % 10]] = arr[i];
    }

    for (int i = 0; i < arr.size(); i++) {
        arr[i] = sorted_array[i];
    }

}
void radix_sort(vector<int>& arr) {
    int max = arr[0];
    for (int i = 0; i < arr.size(); i++) {
        if (max < arr[i]) max = arr[i];
    }
    for (int i = 1; (max / i) > 0; i *= 10) {
        count_sort(arr, i);
    }
}
int main() {
    int size;
    cout << "Enter the size of an product array" << endl;
    cin >> size;
    vector<int> product(size);
    cout << "Enter the Prdouct prices" << endl;
    for (int i = 0; i < size; i++) {
        cin >> product[i];
    }
    radix_sort(product);
    cout << "Sorted product array w.r.t prices" << endl;
    for (auto m : product) {
        cout << m << " ";
    }
    return 0;
}