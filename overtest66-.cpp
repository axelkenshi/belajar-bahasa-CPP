#include <iostream>
#include <sstream>
using namespace std;
// konversi integer ke string./perbedaan tipe data.
// menggunakan liberary #<sstream> (string stream)
int main (){
    int number = 15;
    string abjad;

// sintaks untuk menampung data untuk di konversi (stringstream).
    stringstream temporary;
    temporary << number;

    temporary >> abjad;

    cout << "ini integer : "<<number + number<<endl;
    cout << "ini string : "<<abjad + abjad<<endl;

    cout << "==================================\nkonversi string ke integer"<<endl;
    float angka;
    string kata = " 8.5 ";

    stringstream temp;
    temp << kata;
    temp >> angka;

    cout << "ini integer : "<<angka + angka<<endl;
    cout << "ini string : "<<kata + kata<<endl;
}