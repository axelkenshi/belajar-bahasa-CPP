#include <iostream>
#include <stdlib.h>
using namespace std;

// push array
// logika keranjang/kapasitas
// menambahkan data di array
int main(){
int max = 7;
int top = -1;
// top seperti index array.
string keranjang[max];
string lanjutkan;

do{
system("cls");
    if (top == max - 1){
        cout << "Keranjang anda sudah penuh!"<<endl;
    } else {
        top++;
        cout << " masukkan barang (belanjaan) = ";
        cin >> keranjang[top];
        cout << "data "<<keranjang[top]<<" berhasil ditambahkan"<<endl;
    }

cout<<"====================================="<<endl;
cout <<" isi keranjang saat ini = "<<endl;
for (int a = 0; a <= top ; a++){
    cout << a+1 <<" == "<<keranjang[a]<<endl;
} 
cout << "Ingin melanjutkan program?\n(y/n)";
cin >> lanjutkan;
cout << "program selesai."<<endl;
} while (lanjutkan == "y");
}