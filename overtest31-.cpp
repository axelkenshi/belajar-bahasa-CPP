#include <iostream>
using namespace std;

int main(){
     // searching menggunakan array
/* int angka[] = {10, 9, 5, 3, 6, 2, 1, 7, 10, 8};
int lenght = sizeof(angka)/(*angka);
int datacari, resultscari;
    cout << "Data yang tersedia : "<<endl;
for (int a = 0; a < lenght; a++){
    cout << " index ke- "<<a<< " : "<<angka[a]<<endl;
}
    cout << "Data yang akan di cari : ";
    cin >> datacari;
    for (int b = 0; b < lenght; b++ ){
        if (datacari == angka[b]){
            resultscari++;
        }
    }
    if (resultscari == 0){
        cout << " Data pencarian tidak ditemukan!"<<endl;
    }
    else{
        cout << " data "<<datacari<< " Ditemukan di : "<<endl;
            for(int c = 0; c < lenght; c++){
                if(datacari == angka[c]){
                cout<<" index ke-"<<c<<endl;
                }
            }
    }
*/





// searching menggunakan input array.

string barang[] = {"roti","ikan","beras","susu","mineral"};
int lenght = sizeof(barang)/sizeof(*barang);
string datacari;
int resultscari;
    cout << "Data yang tersedia : "<<endl;
for (int a = 0; a < lenght; a++){
    cout << " index ke- "<<a<< " : "<<barang[a]<<endl;
}
    cout << "Data yang akan di cari : ";
    cin >> datacari;
    for (int b = 0; b < lenght; b++ ){
        if (datacari == barang[b]){
            resultscari++;
        }
    }
    if (resultscari == 0){
        cout << " Data pencarian tidak ditemukan!"<<endl;
    }
    else{
        cout << " data "<<datacari<< " Ditemukan di : "<<endl;
            for(int c = 0; c < lenght; c++){
                if(datacari == barang[c]){
                cout<<" index ke-"<<c<<"\n"<<endl;
                }
            }
    }
}