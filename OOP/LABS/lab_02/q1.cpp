#include <iostream>
#include <cmath>
#include <string>
using namespace std;
class rational {
private:
	int* num;
	int* den;
	int gcd(int n, int d) {
		n = abs(n);
		d = abs(d);
		if(n == 0)  return d;
		if(d == 0)  return n;
		for (int i = fmin(n, d); i > 0 ;i--) {
			if (n % i == 0 && d % i == 0) {
				return i;
			}
		}
		return 1;
	}
public:
	rational() {
		num = new int(0);
		den = new int(1);
	}
	rational(const rational& r) {
		num = new int;
		*num = *(r.num);
		den = new int;
		*den = *(r.den);
	}
	rational(int n, int d) {
		num = new int(n / gcd(n, d));
		den = new int(d / gcd(n, d));
	}
	rational& operator=(const rational& r) {
		if (this == &r) return *this;
		delete num;
		delete den;
		num = new int(*r.num / (gcd(*r.num, *r.den)));
		den = new int(*r.den / (gcd(*r.num, *r.den)));
		return *this;
	}
	~rational() {
		delete num;
		delete den;
	}
	void display() {
		cout << *num << "/" << *den << endl;
	}
	int get_num() const {
		return *num;
	}
	int get_den() const {
		return *den;
	}
	void set_num(int n) {
		*num = n;
	}
	void set_den(int d) {
		*den = d;
	}
	string tostring() const {
		return to_string(*num) + "/" + to_string(*den);
	}
	rational operator+(const rational& r) const {
		int n = (*num) * (*r.den) + (*den) * (*r.num);
		int d = (*den) * (*r.den);
		rational result(n,d);
		return result;
	}
	rational operator-(const rational& r) const {
		int n = (*num) * (*r.den) - (*den) * (*r.num);
		int d = (*den) * (*r.den);
		rational result(n,d);
		return result;
	}
	rational operator*(const rational& r) const {
		int n = *num * (*r.num);
		int d = *den * (*r.den);
		rational result(n,d);
		return result;
	}
	rational operator/(const rational& r) const {
		int n = *num * (*r.den);
		int d = *den * (*r.num);
		rational result(n,d);
		return result;
	}
	bool operator==(const rational& r)const {
		if (*num == *r.num && *den == *r.den) return  true;
		else return false;
	}
	bool operator!=(const rational& r)const {
		return (*num != *r.num || *den != *r.den);
	}
};
int main() {
	rational r1(2 , 18);
	rational r2(16, 18);
	r1.display();
	r2.display();
	rational r3 = r1;
	r3.display();
	rational r4;
	r4 = r2;
	r4.display();
	rational r5 = r1 + r2;
	r5.display();
	rational r6 = r1 - r2;
	r6.display();
	rational r8 = r2 * r1;
	r8.display();
	rational r7 = r2 / r1;
	r7.display();
	cout << boolalpha << (r3 == r1 ) << endl;
	cout << boolalpha << (r4 != r1) << endl;
	cout << r1.get_num() << endl;
	cout << r1.get_den() << endl;
	r1.set_num(7);
    r1.set_den(8);
	r1.display();
	cout << r2.tostring() << endl;
		return 0;

}
