#include <iostream>
#include <vector>
using namespace std;

class shapes {
public:
	virtual void draw() {
		cout << "Drawing a shape\n";
	}
};
class circle : public shapes {
public:
	void draw() override {
		cout << "drawing a circle\n";
	}
	virtual void setradius(double radius) {
		cout << "Radius set to " << radius << endl;
	}
};
class rectangle : public shapes {
public:
	void draw() override {
		cout << "Drawing a rectangle\n ";
	}
};
int main() {
	circle c;
	rectangle r;
	vector<shapes*> ptr;
	ptr = { &c,&r };
	for (shapes* s : ptr) {
		s->draw();
		cout << endl;
		circle* ptr1 = dynamic_cast<circle*>(s);
		if (ptr1 != nullptr) {
			ptr1->setradius(5);
			cout << endl;
		}
	}
}