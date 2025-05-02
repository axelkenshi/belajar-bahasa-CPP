#include <iostream>
#include <stdlib.h>
//   clearscreen system ("CLS") == membersihkn eksekusi program
using namespace std;
int main(){
    string nama, gendr, umur, lanjut;
    do {
    cout << "masukkan nama anda : ";
    cin >> nama;
    cout << "masukkan gender anda : ";
    cin >> gendr;
    cout << "masukkan umur anda : ";
    cin >> umur;

    system("cls");
    // untuk menjalankan fungsi dari stdlib.h
    // berguna untuk menghilangkan spam/histori dari program sebelumnya.

    cout << "Nama saya adalah "<<nama<<"\n juga gender saya, "<<gendr<<"\n dan umur saya sekarang "<<umur<<" Tahun"<<endl;
    cout << "\n ingin mengulangi program?\n(y/n)";
    cin >> lanjut;
    
    system("cls");

    } while(lanjut=="y");
}