#include <iostream>
#include <vector>
using namespace std;


string fiboWordHelper(int n) {
    if (n == 0) return "b";
    if (n == 1) return "a";
    return fiboWordHelper(n - 1) + fiboWordHelper(n - 2);
}


vector<string> fiboWord(int n) {
    if (n < 2) {
        cout << "invalid" << endl;
        return {};
    }

    vector<string> result;
    for (int i = 0; i < n; i++) {
        result.push_back(fiboWordHelper(i));
    }
    return result;
}

int main() {
    int n;
    cout << "Enter the NO of Series ";
    cin >> n;

    vector<string> words = fiboWord(n);
    for (int i = 0; i < words.size(); i++) {
        cout << words[i];
        if (i != words.size() - 1) cout << ", ";
    }

    cout << endl;

    return 0;
}
