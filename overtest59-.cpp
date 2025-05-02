#include <iostream>
#include <string>
using namespace std;
// PENGGUNAAN/MANIPULASI <STRING> (1).
int main(){
    // kumpulan dari karakter yg menjadi rangkaian harus "".
    // char kar[5] = "ABCDE";
    // char kar[5] = {'a', 'b', 'c', 'd','e'};
        char kar[11];
        cout << "Masukkan sejumlah karakter : ";
        // sama seperti getline string namun beda penulisan untuk char.
        cin.getline(kar, 11);
        cout << kar <<endl;
    cout << "================================\n"<<endl;
    // keuntungan string adlh kita tdk perlu deklarasikan jumlah karakter dlm variabel tsb.
    string nama;
    cout << "Sebutkan nama anda : "; 
    getline(cin, nama);
    cout << "nama anda == "<<nama<<endl;
}
