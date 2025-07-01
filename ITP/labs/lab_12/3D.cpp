#include<iostream>
using namespace std;
struct box
{
    float lenght;
    float width;
    float heigt;

};
bool operator==(const box& a, const box& b){
     return(a.heigt*a.width*a.lenght==b.heigt*b.width*b.lenght);

}
bool operator!=(const box& a, const box& b){
    return(a.heigt*a.width*a.lenght!=b.heigt*b.width*b.lenght);
}
int main(){
         box volume1, volume2, volume3;
         volume1={2,3,4};
         volume2={1,3,4};
         volume3={2,3,4};
         if(volume1==volume2){
            cout<<"voume of box1 is equal to volume of box\n";
         }else{
            cout<<"Volumes are not equal\n";
         }
         if(volume1!=volume3){
            cout<<"volume of box1 is not equal to volume of box3\n";
         }else{
            cout<<"volume of box1 is equal to volume of box3\n";
         }

    return 0;
}