#include <iostream>
using namespace std;

// operator pembanding.

int main(){
    int x, y;
    bool kondisi;
    string hasil;
        //terpusat pada x dan y
    x = 10;
    y = 10;

/* operasi sebanding */
// operasi ==
kondisi = x == y;
    hasil = kondisi == 1? " sama dengan ":" tidak sama dengan ";
    cout << "variable x, "<< hasil << "variabel y, "<< endl; 

// operasi !=
kondisi = x != y;
    hasil = kondisi == 1? " tidak sama dengan ":" sama dengan ";
    cout << "variable x, "<< hasil << "variabel y, "<< endl; 

//  operasi >
kondisi = x > y;
    hasil = kondisi == 1? " lebih dari ":" tidak lebih ";
    cout << "variable x, "<< hasil << "variabel y, "<< endl; 

// operator < 
kondisi = x == y;
    hasil = kondisi < 1? " kurang dari ":" tidak kurang dari ";
    cout << "variable x, "<< hasil << "variabel y, "<< endl; 

// operator >=
kondisi = x >= y;
    hasil = kondisi == 1? " lebih dari atau sama dengan ":" tidak lebih dari atau sama dengan ";
    cout << "variable x, "<< hasil << "variabel y, "<< endl; 

// operator <=

kondisi = x <= y;
    hasil = kondisi == 1? " kurang dari atau sama dengan ":" tidak kurang dari atau sama dengan ";
    cout << "variable x, "<< hasil << "variabel y, "<< endl; 



}