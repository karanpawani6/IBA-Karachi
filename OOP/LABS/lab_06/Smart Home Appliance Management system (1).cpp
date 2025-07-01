#include<iostream>
using namespace std;
class appliance {
private:
	string model;
	string brand;
	bool powerstatus=0;
public:
	appliance(string model, string brand) {
		this->brand = brand;
		this->model = model;
	}
	void turnon() {
		powerstatus = 1;
	}
	void turnoff() {
		powerstatus = 0;
	}
	bool get_status() {
		return powerstatus;
	}
	string get_brand() {
		return brand;
	}
	string get_model() {
		return model;
	}
	virtual void display_status() = 0;
	virtual ~appliance() {};
};
class smartlight : public appliance {
private:
	int brightnesslevel;
public:
	smartlight(string model, string brand, int brightness) : appliance(model, brand) {
		this->brightnesslevel = brightness;
	}
	void display_status()override {
		cout << endl;
		cout << "Brand: " << get_brand() << endl;
		cout << "Model: " << get_model() << endl;
		cout << "Power status: " << get_status() << endl;
		cout << "Brightness Level: " << brightnesslevel << endl;
	}
};
class smartthermostat : public appliance {
private:
	double temperature;
public:
	smartthermostat(string model, string brand, double temperature) : appliance(model, brand) {
		this->temperature = temperature;
	}
		void display_status() override {
		cout << endl;
		cout << "Brand: " << get_brand() << endl;
		cout << "Model: " << get_model() << endl;
		cout << "Power status: " << get_status() << endl;
		cout << "temperature: " << temperature << endl;
	}
};
int main() {
	appliance* ptr[2] = { new smartlight("A19","WIZ",5),new smartthermostat("RGB","GOVEE",30.1) };
	for (int i = 0;i < 2;i++) {
		ptr[i]->display_status();
	}
	for (int i = 0;i < 2;i++) {
		ptr[i]->turnon();
	}
	for (int i = 0;i < 2;i++) {
		ptr[i]->display_status();
	}
	for (int i = 0;i < 2;i++) {
		delete ptr[i];
	}
	return  0;
}