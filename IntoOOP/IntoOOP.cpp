// IntoOOP.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

class Mahasiswa {
public: // akses modifier
    string nama;
    int umur;
    string jurusan;

    void output() {
        cout << "nama: " << nama << endl;
        cout << "umur: " << umur << endl;
        cout << "jurusan: " << jurusan << endl;
    }

};

class matakuliah {
private:
    string kodemk;
    string namamk;
    int sks;
public:
    void input() {
        cout << "kode mk: ";
        cin >> kodemk;
        cout << "nama mk: ";
        cin >> namamk;
        cout << "sks :";
        cin >> sks;
    }

};
int main()
{
    
}




