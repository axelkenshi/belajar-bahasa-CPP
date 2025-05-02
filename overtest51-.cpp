#include <iostream>
using namespace std;
// INPUT pada struct.

struct guru{
    string nama;
    int umur;
};

struct mapel{
    string nama_pelajaran;
    int kkm;
    guru guru_mapel;
};
int main(){
mapel mapel1;

cout <<"\t input pada atribut struct"<<endl;
cout <<"nama mapel = ";
cin >> mapel1.nama_pelajaran;
cout <<"nilai kkm = ";
cin >> mapel1.kkm;
cout <<"nama guru = ";
cin >> mapel1.guru_mapel.nama;
cout <<"usia guru = ";
cin >> mapel1.guru_mapel.umur;

cout <<"=============================\n \tOutput : "<<endl;
cout <<"mata pelajaran ini, "<<mapel1.nama_pelajaran<<endl;
cout <<"Kisaran nilai kkm = "<<mapel1.kkm<<endl;
cout <<"Nama guru yaitu = "<<mapel1.guru_mapel.nama<<endl;
cout <<"Usia guru sekarang = "<<mapel1.guru_mapel.umur<<" y.o"<<endl;
}