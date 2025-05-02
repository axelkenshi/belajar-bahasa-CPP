#include <iostream>
using namespace std;

// menghitung luas lingkaran
// L = phi x r x r
// const \=untuk konstant misal phi 3.14 atau 22/7

// #define phi 3.14159 (define sama seperti konstanta namun tdk perlu tipe data)
int main(){
    const float phi = 3.14;
    float L, r;

    //value jari2
cout << " masukkan jumlah jari2 lingkaran = ";
cin>> r;

    //proses perhitungan luas lingkarn
L = phi * r * r ;

    // hasil
cout << L;


}