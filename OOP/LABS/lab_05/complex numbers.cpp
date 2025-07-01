#include <iostream>
using namespace std;
class complex {
private:
	double real;
	double imaginary;
	friend ostream& operator<<(ostream& os, const complex& c1);
	friend istream& operator>>(istream& in, complex& c1);
public:
	complex() {
		real = 0;
		imaginary = 0;
	}
	complex(double a) {
		real = a;
		imaginary = 0;
	}
	complex(double a, double b) {
		real = a;
		imaginary = b;
	}
	complex operator+(const complex& right) {
		complex sum;
		sum.real = this->real + right.real;
		sum.imaginary = this->imaginary + right.imaginary;
		return sum;
	}
	complex operator-(const complex& right) {
		complex difference;
		difference.real = this->real - right.real;
		difference.imaginary = this->imaginary - right.imaginary;
		return difference;
	}
	complex operator*(const complex& right) {
		complex product;
		product.real = (this->real * right.real) - (this->imaginary * right.imaginary);
		product.imaginary = (this->real * right.imaginary) + (this->imaginary * right.real);
		return product;
	}
	bool operator==(const complex& right) {
		return (this->real == right.real && this->imaginary == right.imaginary);
	}
	
};
ostream& operator<<(ostream& os, const complex& c1) {
	os << c1.real << " + " << c1.imaginary << "i" << endl;
	return os;
};
istream& operator>>(istream& in, complex& c1) {
	cout << "Enter value of real part: ";
	in >> c1.real;
	cout << "Enter value of imaginary part: ";
	in >> c1.imaginary;
	return in;
};
int main() {
	complex c1(10, 20);
	complex c2(2, 5);
	cout << c1 + c2 ;
	cout << c1 - c2;
	cout << c1 * c2;
	if (c1 == c2) {
		cout << "equal" << endl;
	}
	else {
		cout << "not equal" << endl;
	}
complex c3;
cin >> c3;
cout << c3;
}


