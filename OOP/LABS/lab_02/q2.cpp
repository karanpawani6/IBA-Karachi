#include <iostream>
#include <string>
using namespace std;
class integerset {
private:
	bool* arr = new bool[101];
	;
public:
	integerset() {
		for (int i = 0; i < 101; i++) {
			arr[i] = false;
		}
	}
	integerset(const integerset &other) {
		for (int i = 0; i < 101; i++) {
			arr[i] = other.arr[i];
		}
	}
	integerset& operator=(const integerset& other) {
		if (this == &other) return *this;
		delete[] arr;
		arr = new bool[101];
		for (int i = 0; i < 101; i++) {
			arr[i] = other.arr[i];
		}
		return *this;
	}
	integerset(int other[], int size) {
		for (int i = 0 ; i < 101; i++) {
			arr[i] = false;
		}
		for (int i = 0; i < size; i++) {
			if (arr[i] < 101 && arr[i] >= 0) {
				arr[other[i]] = true;
			}
		}
	}
	~integerset() {
		delete[] arr;
	}
	integerset unioinofsets(const integerset& other) {
		integerset result;
		for (int i = 0; i < 101; i++) {
			if (arr[i] || other.arr[i]) {
				result.arr[i] = true;
			}
			else {
				result.arr[i] = false;
			}
		}
		return result;
	}
	integerset intersectionofset(const integerset& other) {
		integerset result;
		for (int i = 0; i < 101; i++) {
			if (arr[i] && other.arr[i]) {
				result.arr[i] = true;
			}
			else {
				result.arr[i] = false;
			}
		}
		return result;
	}
	void insertelement(int k) {
		arr[k] = true;
	}
	void deleteelement(int m) {
		arr[m] = false;
	}
	string tostring() {
		string result;
		for (int i = 0; i < 101; i++) {
			if (arr[i]) {
				result += to_string(i) + " ";		
			}
		}
		return result;
	}
	void isequalto(const integerset& other) {
		for (int i = 0; i < 101; i++) {
			if (arr[i] != other.arr[i]) {
				cout << "Not equal" << endl;
				return;
			}
		}
			cout << "equal" << endl;
	}
	void display() {
		cout << "( ";
		for (int i = 0; i < 101; i++) {
			if (arr[i]) {
				cout << i << ",";
			}
         }
		cout << ")" << endl;
	}
};
int main() {
	int arr[4] = { 1,2,3,5 };
	int arr2[5] = { 6,7,9,0,5 };
	integerset set1(arr, 4);
	integerset set2(arr2, 5);
	set1.display();
	set2.display();
	integerset set3 = set1;
	set3.display();
	set3.isequalto(set1);
	integerset set4;
	set4 = set1;
	set4.display();
	integerset set5 = set2.unioinofsets(set1);
	integerset set6 = set2.intersectionofset(set1);
	set5.display();
	set6.display();
	cout << set1.tostring() << endl;
	set1.insertelement(50);
	set1.display();
	set1.deleteelement(50);
	set1.display();
	return 0;
};