#include <iostream>
#include <vector>
using namespace std;
void merge(vector<string>& arr,int start, int mid , int end){
    vector<string> aux(arr.size());
    for(int k = start ; k <= end ; ++k){
        aux[k] = arr[k];
    }
    int i = start , j = mid + 1;
    for(int k = start ; k <= end ; k++){
        if(i > mid) arr[k] = aux[j++];
        else if(j>end) arr[k] = aux[i++];
        else if(aux[i] < aux[j]) arr[k] = aux[i++];
        else   arr[k] = aux[j++];
    }
}
void sort(vector<string>& arr){
    int N = arr.size();
    for(int size = 1 ; size < N ; size*=2){
        for(int left = 0 ; left < N - size ; left += size*2){
            int mid = left + size -1;
            int right = min(left + 2* size -1 , N-1);
            merge(arr,left , mid ,right);
        }
    }
}
int main(){
        vector<string> arr = {"The Hobbit", "1984", "To Kill a Mockingbird", "Brave New World","323"};
        int N = arr.size();
        sort(arr);
        for(auto m : arr){
            cout << m <<" ";
        }
    return 0;
}