#include <iostream>
#include <vector>
using namespace std;
vector<int> removeElement(vector<int> vec, int element) {
    vector<int> result;
    for (int i=0;i<vec.size();i++) {
        if (vec[i]!= element) {
            result.push_back(vec[i]);
        }
    }
    return result;
}
int main() {
    int n,element;
    cout<<"enter the size of vector\n";
    cin>>n;
    cout<<"enter the elements\n";
    vector<int> vec(n);
    for(int i=0;i<vec.size();i++){
        cin>>vec[i];
    }
    cout<<"enter the element you want to delet\n";
    cin>>element;
    vec = removeElement(vec, element);
    for (int num : vec) {
        cout << num << " ";
    }
    cout << endl;
    return 0;
}
