#include <iostream>
using namespace std;

int main(){
// operator sisa bagi %
int a, hasil;

cout << " masukkan bilangan = ";
cin>>a ;
    hasil = a % 2 ;
        string jenis = hasil == 1 ? "ganjil" : "genap"
        ;
    cout << "bilangan "<<a<< " termasuk bilangan " << jenis;



}