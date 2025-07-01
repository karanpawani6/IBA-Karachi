#include <iostream>
#include <vector>
using namespace std;
double average(vector<int> a, int start, int end) {
    double sum = 0;
    for (int i = start; i <= end; i++) {
        sum += a[i];
    }
    return sum / (end - start + 1);
}
double scoresAverage(vector<int> scores) {
    int mid = scores.size() / 2;
    double firstHalfAvg = average(scores, 0, mid - 1);
    double secondHalfAvg = average(scores, mid, scores.size() - 1);
    return firstHalfAvg > secondHalfAvg ? firstHalfAvg : secondHalfAvg;
}
int main() {
    cout << scoresAverage({1,2,3,4,5,6,7,8}) << endl; 
    return 0;
}
