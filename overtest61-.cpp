#include <iostream>
#include <string>
using namespace std;
//      MEMANIPULASI DATA STRING
/* pertukaran data,mencari kata,
mereplace karakter,mencari panjang karakter,menghitung jumlah karakter.*/
int main(){
string kalimat = "Saya sedang tidur";
string kalm = "saya sedang olahraga";
cout << "before :"<<endl;
cout << "variable-kalimat"<<kalimat<<endl;
cout << "variable-kal"<<kalm<<endl;

// swap -- dalah pertukaran value 2 variable string. 
cout << "after :"<<endl;
kalimat.swap(kalm);
cout << "variable-kalimat"<<kalimat<<endl;
cout << "variable-kal"<<kalm<<endl;

// mencari kata didalam kalimat.
cout<<"\n=================================\n"<<endl;
cout << "Find = "<<endl;
int kata_cari = kalimat.find("sedang");
cout << "Kata sedang ada di : "<<kata_cari<<endl;

// mereplace karakter didalam kalimat.
// merubah kata "sedang". .replace(dari, sampai, "text")
cout << "======================================\n"<<endl;
kalimat.replace(5, 6, "otewe");
cout << "\nsesudah ganti, kalimat : "<<kalimat<<endl;

// mencari panjang karakter.(length())
// di beberapa kasus bisa pakai strlen.
cout << "====================================\n"<<endl;
cout << "jumlah karakter : "<<endl;
    // menampung jumlah kalimat
int jml_kar = kalimat.length();
cout << "Hasil jumlah karakter : "<<jml_kar<<endl;
cout <<endl;

// mencari jumlah kata
//gunakan algoritma sendiri!.
int jmlh_kata = 1;
for(int a = 0; a < jml_kar; a++){
if (kalimat[a] == ' '){
    jmlh_kata++;
    }
}
cout << "========================\nkalimat sekarang : "<<kalimat<<endl;
cout << "Jumlah kata : "<< jmlh_kata <<endl;

//REPLACE input keyboard.
string replace;
cout << "input the change costum text : "; getline(cin, replace);
    //menjadikan parameter dari replace tadi(-1 gk ada, 1 ada) 
int cari_pengubah = replace.length();
int kata_ubah_find = kalimat.find(replace);
    if (kata_ubah_find > -1 ){
        string changer;
        cout <<" Ganti kalimat dengan : "; getline(cin, changer);
            // .replace(char ke brp, dari brp, dan jumlah yg akan di ubah brp).
            kalimat.replace(kata_ubah_find, cari_pengubah, changer);
    
    } else {
        // kalau gk ada
        cout << " Kata tidak ditemukan! "<<endl;
    }
    cout << "Hasil perubahan == "<< kalimat<<endl;
}