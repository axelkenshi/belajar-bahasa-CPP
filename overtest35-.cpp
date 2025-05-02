#include <iostream>
#include <stdlib.h>

// mengupdate array index


int main(){
int max = 7;
int top = -1;

string keranjang[max];
string temp;
int no_index, pilihan;

do{
system("cls");
cout <<"pilihan\n 1. tambah \n2. ubah \n3. selesai"<<endl;
cout << "opsi : ";
cin>> pilihan;
    switch (pilihan)
    {
    case 1:
        if (top == max - 1){
        cout << "Keranjang anda sudah penuh!"<<endl;
    } else {
        top++;
        cout << " masukkan barang (belanjaan) = ";
        cin >> keranjang[top];
        cout << "data "<<keranjang[top]<<" berhasil ditambahkan"<<endl;
    }
        break;
    case 2:
        cout <<"nomor data yang di ubah : ";
        cin >> no_index;
        cout <<"index awal : "<<keranjang[no_index-1];
        cout <<"index baru : ";
        cin >> temp;
        keranjang[no_index-1] = temp;
        break;
    case 3:
        pilihan = 3;
    default:
    cout << "Pilihan tidak valid!"<<endl;
        break;
    }

cout<<"====================================="<<endl;
cout <<" isi keranjang saat ini = "<<endl;
for (int a = 0; a <= top ; a++){
    cout << a+1 <<" == "<<keranjang[a]<<endl;
} 

} while (pilihan != 3);

}
