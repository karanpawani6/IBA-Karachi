#include<iostream>
using namespace std;

template <typename T>
class Product{
    public:
    string name;
    double price;
    T stock;
    Product(string name , double price , T stock){
        this->name = name;
        this->price = price;
        this->stock = stock;
    }

    void purchase(T quantity){
        if(quantity > stock){
            throw std::runtime_error("Stock Not available");
        }
        stock -= quantity;
        cout<<"Remaing Stock  : "<< stock<<endl;
    }

    void display(){
        cout<<this->name;
        cout<<this->price;
        cout<<this->stock;
    }

};
int main()
{
    try{
        Product TV("TV" , 500 , 5);
        TV.purchase(5);

        Product CookingOil("CO" , 10 , 2.5);
        CookingOil.purchase(1);
    }
   
    catch (std::runtime_error& e) {
        cout << "Caught an exception: " << e.what() << "\n";}




 return 0;
}