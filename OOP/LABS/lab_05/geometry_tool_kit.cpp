#include <iostream>
using namespace std;
float calculateperimeter(int radius) {
	return 2 * 3.141 * radius;
}
float calculateperimeter(int length, int width) {
	return length * width;
}
float calculateperimeter(int a, int b, int c) {
	return a + b + c;
}
float calculateperimeter(float arr[],int size) {
	float sum = 0;
	for (int i = 0; i < size;i++) {
		sum += arr[i];
	}
	return sum;
}
int main() {
	int choice;
	cout << " Select the shape from the following \n 1.circle \n 2.rectangle\n 3.triangle \n 4.polygon " << endl;
	cin >> choice;
	switch (choice) {
	case 1:
		int radius;
		cout << "Enter the radius of the circle" << endl;
		cin >> radius;
		cout << "The perimeter of the circle is " << calculateperimeter(radius) << endl;
		break;
	case 2:
		int length, width;
		cout << "Enter the length and width of the rectangle" << endl;
		cin >> length;
		cin >> width;
		cout << "The perimeter of rectangle is " << calculateperimeter(length, width) << endl;
		break;
	case 3:
		int a, b, c;
		cout << "Enter the three sides of triangle" << endl;
		cout << "first" << endl;
		cin >> a;
		cout << "Second" << endl;
		cin >> b;
		cout << "third" << endl;
		cin >> c;
		cout << "The perimeter of triangle is " << calculateperimeter(a, b, c) << endl;
		break;
	case 4:
		int n;
		cout << "Enter the no: of sides of polygon" << endl;
		cin >> n;
		float* arr = new float[n];
		cout << "Enter the sides" << endl;
		for (int i = 0; i < n;i++) {
			cin >> arr[i];
		}
		cout << "The perimeter of polygon is " << calculateperimeter(arr,n) << endl;
		delete[] arr;
		break;
	}
	
	return 0;
}
