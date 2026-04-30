#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Array{
    private:

        int* items;
        int size,lengh;
public:
    Array(int arrsize){
        size = arrsize;
        lengh = 0;
         items =new int [size];
    }
        void Fill(){

            int arr_of_fill;
            cout<<"inter your size Array to fill : ";

            cin>>arr_of_fill;
            if (arr_of_fill > size){
                cout<<"The Array size "<<size<<" you cant this";
                return;
            }
            for(int i = 0; i <arr_of_fill;i++ ){
                cout<<"inter number of Array: ";
                cin>>items[i];
                lengh++;
            }
        }
        void Printing(){
            for(int i = 0; i <lengh;i++ ){
                cout<<items[i]<<"\t";
            }
            cout<<"\n";
        }

        int getsize(){
            return size;
        }
        int getlength(){
            return lengh;
        }
        int Serech(int key){
       int index = -1;
            for(int i =0; i<lengh;i++){

                if (key == items[i]){
                    index = i;
                        break;
                }
            }
            return index;
        }
        ~Array() { delete[] items; }

  };



int main() {

    int arrsize,ke;
    cout<<"inter the size of demo Array: ";
    cin>>arrsize;


    Array a (arrsize);

    a.Fill();
    a.Printing();
    cout<<"lengh :"<<a.getlength()<<"\n";
    cout<<"size :"<<a.getsize()<<"\n";
    cout<<"inter to Serech :";

cin >>ke;
cout<<a.Serech(ke);

}
