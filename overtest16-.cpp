#include <iostream>
using namespace std;

// operator kondisional

int main (){
    int a, hasil;
    cout <<" \t==============================  "<< endl ;
    cout << "masukkan billangan bullat nya = ";
    cin >> a;

    hasil = a % 2 ;


    string kondisi = hasil == 1? "maka, ganjil": "maka, genap";
    cout << "\tbilangan tsb termasuk = "<<kondisi<<endl;
    }