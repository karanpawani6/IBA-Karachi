#include <iostream>
#include <vector>
using namespace std;
void merge(vector<float>& arr,int start, int mid , int end){
    vector<float> aux(arr.size());
    for(int k = start ; k <= end ; ++k){
        aux[k] = arr[k];
    }
    int i = start , j = mid + 1;
    for(int k = start ; k <= end ; k++){
        if(i > mid) arr[k] = aux[j++];
        else if(j>end) arr[k] = aux[i++];
        else if(aux[i] > aux[j]) arr[k] = aux[i++];
        else   arr[k] = aux[j++];
    }
}
void sort(vector<float>& arr, int start, int end){
    if(start>=end) return;
    int mid = start + (end - start)/2;
    sort(arr,start, mid);
    sort(arr,mid + 1, end);
    merge(arr,start, mid ,end);
}
int main(){
    int N;
    cout << "Enter the size of vector" << endl;
    cin>>N;
    vector<float> arr(N);
    cout << "Enter the elements"<<endl;
    for(int i = 0 ;i <N ; i++){
        cin>>arr[i];
    }
    
    cout <<"Before sorting:"<<endl;
    for(auto m : arr){
        cout << m << " ";
    }
    sort(arr,0 , N -1);
    cout <<"\n After sorting"<<endl;
     for(auto m : arr){
        cout << m << " ";
    }

    return 0;
}