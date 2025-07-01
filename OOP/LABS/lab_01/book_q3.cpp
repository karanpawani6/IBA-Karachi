#include <iostream>
#include <string>
using namespace std;
class book {
    private:
    string title;
    int code;
    int price;
    float score=0;
    int count=0;
    public:
    book(string t, int c, int p){
        title = t;
        code = c;
        price = p;
    }
    void review(float grd){
         score += grd;
         count++;
    }
    string get_name(){
        return title;
    }
    int get_price(){
        return price;
    }
    int get_code(){
        return code;
    }
    float get_score(){
        return score/count;
    }
};
int main(){
book books[5] = {
book("The C++ Programming Language", 1, 60),
book("The Mythical Man-month", 2, 40),
book("The Pragmatic Programmer: Your Journey to Mastery", 3, 50),
book("The Art of Computer Programming", 4, 50),
book("C++ For Dummies", 5, 30)
};
books[0].review(5);
books[0].review(4);
books[1].review(4);
books[2].review(2);
books[3].review(5);
int code;
cout << "Enter code: ";
cin >> code;
for (int i = 0; i < 5; i++) {
if (books[i].get_code() == code) {
if (books[i].get_score() == 0) {
cout << "The book has not been graded yet" << endl;
} else {
cout << "The book has score " << books[i].get_score() << " and price " <<
books[i].get_price() << endl;
}
return 0;
}
}
cout << "The book does not exist" << endl;
return 0;
};