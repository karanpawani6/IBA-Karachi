#include <iostream>
#include<string>
#include<vector>
using namespace std;

int elementation(vector<int> arr, int ch) {
    for (int val : arr) {
        cout << val << " ";
    }cout << endl;
    if (arr.size() == 1) return arr[0];

    if (ch == 1) {
        for (int i = 0; i < arr.size();i++) {

            arr.erase(arr.begin() + i);
        }

        return elementation(arr, 2);
    }

    if (ch == 2) {

        for (int i = 0; i < arr.size(); i++) {
            arr.erase(arr.begin() + arr.size() - i - 1);
        }
        return  elementation(arr, 1);
    }

}



int main() {

    cout << "Enter The Size Of array " << endl;
    int n;
    cin >> n;
    vector<int> arr;

    for (int i = 0; i < n; i++) {
        arr.push_back(i + 1);
    }

    elementation(arr, 1);

    return 0;
}