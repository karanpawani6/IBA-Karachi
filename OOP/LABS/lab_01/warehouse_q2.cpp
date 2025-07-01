#include<iostream>
#include<vector>
using namespace std;
class warehouse{
    vector<int> codes;
    vector<int> quantity;
    public:
    void stock(int c , int q){
        for(int i=0;i<codes.size();i++){
            if(codes[i]==c){
                quantity[i]+=q;
                cout << q << " more items with code " << c << " added, total " << quantity[i] << endl;
                return;
            };
        } 
        codes.push_back(c);
                quantity.push_back(q);
                cout << q << " items with code " << c << " added " << endl;
    };
    void order(int c , int q){
        for(int i=0;i<codes.size();i++){
            if(codes[i]==c){
                if(quantity[i]>=q){
                    cout << q << " items deliverd with code " << c <<endl;
                    quantity[i]-=q;
                    return;
                }else{
                    cout << "the requested quantity is not availble" << endl;
                    return;
                }
            }
        }
         cout << "code " << c << " not found" << endl;
    };
    void show(int c){
        for(int i=0 ; i<codes.size(); i++){
            if(codes[i]==c){
                cout << quantity[i] << " items are stored with code " << codes[i]<<endl;
                return;
            }
        }
        cout << "code " << c << " not found"<<endl;
    }
};
int main(){
          warehouse w;
          w.stock(1,10);
          w.stock(2,20);
          w.stock(3,30);
          w.stock(1,5);
          w.order(1,3);
          w.order(2,25);
          w.order(2,11);
          w.order(4,5);
          w.show(1);
          w.show(2);
          w.show(3);
          w.show(4);
    return 0;
}