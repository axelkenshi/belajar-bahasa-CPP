#include <iostream>
#include <fstream>
#include <string>
using namespace std;
// gunakan liberary fstream.
// (input file stream)     IFSTREAM -> membaca isi file menggunakan c++

int main(){
ifstream myfile("DOKUMENTASI.txt");
string line;
    if (myfile.is_open()){
        while (getline(myfile, line)){
            cout << line <<endl;
        }
        myfile.close();
    } else {
        cout << "FILE GAGAL DIMUAT..."<<endl;
    }
}