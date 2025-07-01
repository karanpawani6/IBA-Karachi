#include <iostream>
#include <vector>
using namespace std;
vector<int> getSubset(vector<int> vec, int start, int end) {
    vector<int> subset;
    if (start < 0) start = 0;
    if (end >= vec.size()) end = vec.size() - 1;

    for (int i = start; i <= end; i++) {
        subset.push_back(vec[i]);
    }
    return subset;
}
int main() {
    int n,start,end;
    cout<<"enter the size of vector\n";
    cin>>n;
    cout<<"enter the elements\n";
    vector<int> vec(n);
     for(int i=0;i<vec.size();i++){
        cin>>vec[i];
    }
   cout<<"enter the starting index\n";
   cin>>start;
   cout<<"enter the ending index\n";
    cin>>end;
    vector<int> subset = getSubset(vec, start, end);
    for (int num : subset) {
        cout << num << " ";
    }
    cout << endl;
    return 0;
}
