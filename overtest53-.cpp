#include <iostream>
using namespace std;
//  Loop Array Index With Struct
// Pointer itu alamat variabel di memory

struct siswa{
    string nama;
    int umur;
};

int main(){
int jmlh_index;
cout << "\t\nlooping array index with struct...\n"<<endl;
cout << "masukkan batas maksimal index : ";cin >> jmlh_index;

    siswa data_siswa[jmlh_index];
    cout << "Rekap data"<<endl;
    // perulngan
    for(int a = 0; a < jmlh_index; a++){
        cout << "data ke-"<<a+1<<endl;
            cout << "Nama siswa = ";
            cin >> data_siswa[a].nama;
            cout << "Umur siswa = ";
            cin >> data_siswa[a].umur;
    }
    cout << "\n================================="<<endl;
    cout << "\tOutput"<<endl;
        for(int a = 0; a < jmlh_index; a++){
        cout << "data ke-"<<a+1<<endl;
            cout << "Nama siswa = "<<data_siswa[a].nama<<endl;
            cout << "Umur siswa = "<<data_siswa[a].umur<<endl;
    }
}