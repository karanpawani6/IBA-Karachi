


#include <iostream>
#include <stdexcept>

using namespace std;


template<typename T>
class Product {
public:
    int ID;
    T price;
    T weight;

   
    Product(int ID, T price, T weight) {
        if (price < 0 || weight < 0) {
            throw runtime_error("Price and weight must be positive.");
        }
        this->ID = ID;
        this->price = price;
        this->weight = weight;
    }

  
    void display() {
        cout << "Product ID: " << ID << endl;
        cout << "Price: " << price << endl;
        cout << "Weight: " << weight << endl;
    }


    void updatePrice(T offset) {
        if (offset < 0) {
            throw runtime_error("Price offset cannot be negative.");
        }
        price += offset;
    }
};


template<>
class Product<string> {
private:
    int ID;
    string serialNumber;

public:
  
    Product(int ID, string serialNumber) {
        if (serialNumber.substr(0, 2) != "SN") {
            throw runtime_error("Invalid serial number. It must start with 'SN'.");
        }
        this->ID = ID;
        this->serialNumber = serialNumber;
    }

    // Display method
    void display() {
        cout << "Product ID: " << ID << endl;
        cout << "Serial Number: " << serialNumber << endl;
    }

    
    void updateSerialNumber(string newSerial) {
        if (newSerial.substr(0, 2) != "SN") {
            throw runtime_error("Invalid serial number. It must start with 'SN'.");
        }
        serialNumber = newSerial;
    }
};

int main() {
    try {
       
        Product<int> P1(12345, 1200, 1208);
        P1.display();
        P1.updatePrice(100);
        P1.display();

        cout << endl;

        
        Product<string> P2(10010, "SN12345");
        P2.display();
        P2.updateSerialNumber("SN67890");
        P2.display();
        
    } catch (const runtime_error &e) {
        cout << "Error: " << e.what() << endl;
    }

    return 0;
}
