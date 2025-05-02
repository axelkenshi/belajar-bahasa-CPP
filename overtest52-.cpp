#include <iostream>
using namespace std;

// struct array
// contoh studycase..

struct mhs{
    string nim;
    string nama;
};
int main(){
mhs mahasiswa[3];

/*mahasiswa[0].nim = "10923818";
mahasiswa[0].nama = "elvine";

mahasiswa[1].nim = "10384286";
mahasiswa[1].nama = "reymond";

mahasiswa[2].nim = "10697329";
mahasiswa[2].nama = "harthou";*/

cout << "\t\n== Registrasi mahasiswa =="<<endl;
cout << "--masukkan data--"<<endl;
cout << "masukkan nim : "; cin >> mahasiswa[0].nim;
cout << "masukkan nama : "; cin >> mahasiswa[0].nama;

cout << "--masukkan data--"<<endl;
cout << "masukkan nim : "; cin >> mahasiswa[1].nim;
cout << "masukkan nama : "; cin >> mahasiswa[1].nama;

cout << "--masukkan data--"<<endl;
cout << "masukkan nim : "; cin >> mahasiswa[2].nim;
cout << "masukkan nama : "; cin >> mahasiswa[2].nama;

    cout <<"Mahasiswa univ niggaa :\n "<<endl;
    cout <<"nim = "<<mahasiswa[0].nim<<endl; 
    cout <<"nama = "<<mahasiswa[0].nama<<endl;
    cout <<"nim = "<<mahasiswa[1].nim<<endl; 
    cout <<"nama = "<<mahasiswa[1].nama<<endl;
    cout <<"nim = "<<mahasiswa[2].nim<<endl; 
    cout <<"nama = "<<mahasiswa[2].nama<<endl;


}