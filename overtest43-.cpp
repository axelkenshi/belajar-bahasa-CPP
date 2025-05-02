#include <iostream>
#include <cmath>
using namespace std;
    /*menghitungkan menggunakan library #cmath
    *perpangkatan (pow)
    */
// function
double hitungpangkat(double angka, double pangkat){
    return pow(angka, pangkat);
}
// procedure
void TampilkanPangkat(double angka, double pangkat){
    cout << " hasil "<<angka<<" Pangkat "<<pangkat;
    cout << " Adalah "<<pow(angka, pangkat)<<endl;
}

int main(){
    double angka, pangkat;
    cout<<" Menghitung pangkat..."<<endl;
    cout << "angka : "; cin >> angka;
    cout << "pangkat : "; cin >>pangkat;
    TampilkanPangkat(angka, pangkat);
}