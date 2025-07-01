


#include <iostream>
#include <string>

using namespace std;

template <typename T1, typename T2>
class Package {
protected:
    T1 weight;
    T2 destination;

public:
    Package(T1 w, T2 d) : weight(w), destination(d) {}

    void display() {
        cout << "Generic Package - Weight: " << weight 
             << ", Destination: " << destination << endl;
    }
};

template <typename T1> class Package<T1, int> {
protected:
    T1 weight;
    int cityCode;

public:
    Package(T1 w, int c) : weight(w), cityCode(c) {}

    void display() {
        cout << "Special Package - Weight: " << weight 
             << ", City Code: " << cityCode << endl;
    }
};


template <>
class Package<double, int> {
private:
    double weight;
    int cityCode;

public:
    Package(double w, int c) : weight(w), cityCode(c) {}

    void display() {
        cout << "Express Package - Weight: " << weight 
             << " kg, City Code: " << cityCode 
             << " (Express Delivery)" << endl;
    }
};

int main() {
  
    Package<float, string> standardPackage(5.5, "New York");
    
  
    Package<int, int> specialPackage(10, 101);
    
  
    Package<double, int> expressPackage(7.5, 202);

  
    standardPackage.display();
    specialPackage.display();
    expressPackage.display();

    return 0;
}



