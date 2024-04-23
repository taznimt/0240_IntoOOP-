#include <iostream>
using namespace std;

class bangunDatar {
    //akses modifier
     private:
         float panjang, Lebar;
     public:
         float luas;

         void input() {

             cout << "Masukan Panjangnya = ";
             cin >> panjang;
             cout << "Maukan Lebarnya = ";
             cin >> Lebar;
         }

         float hitungluas() {
             return panjang * Lebar;
         }

         void display() {
             cout << "Panjangnya = " << panjang << endl;
             cout << "Lebarnya = " << Lebar << endl;
             cout << "Luasnya = " << hitungluas() << endl;
         }


};