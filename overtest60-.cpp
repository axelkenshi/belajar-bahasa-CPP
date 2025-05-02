#include <iostream>
#include <string>
using namespace std;
// MANIPULASI <STRING> (2).
// string"" adalah kumpulan dari char'' yg jadi satu variabel.
int main(){
// mengakses karakter dalah string
string nama = "GrahamBell";

cout << "Nama : "<<nama<<endl;
cout << "Nama Karakter[0] : "<<nama[0]<<endl;
cout << "Nama Karakter[5] : "<<nama[6]<<endl;
    // mengubah karakter |Graham=>Eraham|.
nama[0] = 'E';
cout << "Nama : "<<nama<<endl;

cout << "\n==================================\n"<<endl;
string nama_depan;
string nama_belakang;

cout <<"Masukkan nama depan & tengah anda : "; getline(cin, nama_depan);
cout <<"Masukkan nama Belakang anda : "; getline(cin, nama_belakang);
cout <<"konfirmasi nama depan = "<<nama_depan<<endl;
cout <<"konfirmasi nama belakang = "<<nama_belakang<<endl;
// menggunkan operator penugasan.
nama_depan += " " + nama_belakang;
cout << "\nNama lengkap yaitu : "<<nama_depan<<endl;
}