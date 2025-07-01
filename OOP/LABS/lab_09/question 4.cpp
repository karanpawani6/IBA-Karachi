#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
    vector<int> vec = { 1, 3, 8, 6, 4, 5,7, 2, 0, 9 };
    int count = 0;
    sort(vec.begin(), vec.end(), [&count](int a, int b) {count++; return a < b; });
    for (auto m : vec) {
        cout << m << " ";
    }
    cout << "\n total comparisons: " << count << endl;
    return 0;
}
