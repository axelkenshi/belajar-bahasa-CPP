#include <iostream>
using namespace std;
        /* PROSEDURE DAN FUNGSI */
// string siswa (string nama, string kelas){
//     return (nama+ " merupakan seorang siswa kelas "+kelas);
// }

// int main(){
//     string nama, kelas;
//     cout << "nama : "; getline(cin, nama);
//     cout << "kelas : "; getline(cin, kelas);
//         cout << siswa(nama,kelas);
// }

//=========================================

// void siswa (string nama, string kelas){
//     cout << nama <<" adalah siswa "<<kelas;
// }

// int main(){
//     string nama, kelas;
//     cout << "nama : "; getline(cin, nama);
//     cout << "kelas : "; getline(cin, kelas);
//         siswa(nama, kelas);
// }

// ========================================
bool lulus(int nilai){
    if (nilai > 75){
        return true;
    } else {
        return false;
    }
}

void data_anak(string nama, int nilai){
    lulus(nilai);
    cout <<"\nnama : "<<nama<<endl;
    cout <<"nilai : "<<nilai<<endl;
    cout <<"status : ";
    if(lulus (nilai)){
        cout << "lulus"<<endl;
    } else {
        cout<< "tidak lulus"<<endl;
    }
}

int main(){
    string nama;
    int nilai;
    cout<<"masukkan nama : ";
    getline (cin, nama);
    cout <<"Masukkan nilai : ";
    cin>>nilai;
    data_anak(nama, nilai);
}