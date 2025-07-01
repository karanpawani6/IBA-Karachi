#include<iostream>
#include<string>
using namespace std;
struct movies{
   string name;
   int   release_year;
   float rating;
};
void movies_detail(movies* array,int size){
    cout<<"Enter the movies detail\n";
    for(int i=0;i<size;i++){
        cout<<"Enter the movie name\n";
        getline(cin,array[i].name);
        cout<<"Enter the movie release year\n";
        cin>>array[i].release_year;
        cout<<"Rate the movie between 0 to 10\n";
        cin>>array[i].rating;
        cin.ignore();
    }
}
movies* sort_movies(movies *array,int size){
             for(int i=0;i<size;i++){
                for(int j=0;j<size-i-1;j++){
                    if(array[j].rating<array[j+1].rating){
                        movies temp=array[j];
                          array[j]=array[j+1];
                          array[j+1]=temp;
                    }
                }
             }
             return array;
}
ostream& operator<<(ostream& out, const movies& array){
        out<<std::fixed<<"Name: "<<array.name<<", Release year: "<<array.release_year<<", rating: "<<array.rating;
        return out;
}
int main(){
    int a=5;
        //  movies array[4];
        //  int size=sizeof(array)/sizeof(array[0]);
        //  movies_detail(array,size);
        //  movies* sort = sort_movies(array,size);
        //  for(int i=0;i<size;i++){
        //     cout<<sort[i]<<endl;
        //  }
         cout<<a;
    return 0;
}