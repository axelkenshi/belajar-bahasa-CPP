#include <iostream>
#include <string>
#include <fstream>
using namespace std;

// #<FSTREAM> Manulis file eksternal

int main (){
    //*(output file stream) ofstream -> memberikan outputan (menulis)
    ofstream file;
    string f;

    cout << " Masukkan kalimat : "; getline(cin, f);
    // KONVERT KE .TXT
    file.open("sampahfile.txt");
    file<< " isi kalimat : \n "<<f<< " ";
    // Biar langsung terbuka
    system("START /MIN NOTEPAD /P sampahfile.txt");
    // /P -> untuk cetak di mesin printer
}