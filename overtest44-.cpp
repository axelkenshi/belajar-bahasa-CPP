#include <iostream>
#include <cmath>

using namespace std;
// menghitung angka dengan sqrt (akar kuadrat).
double hitungakar(double angka){
    return sqrt(angka);
}

void tampilkan(double angka){
    double hasil = hitungakar(angka);
        cout<<"akar kuadrat dari "<< angka;
        cout<< " adalah " <<hasil<<endl;

}
int main(){
    double angka;
    string ulang;
    do{
        system("cls");
        cout <<"Menghitung akar kuadrat dengan sqrt..."<<endl;
        cout<<"angka : "; cin >>angka;
        tampilkan(angka);
        cout << "ingin mengulangi program? \n <y/n>\n...";
        cin >> ulang;
    } while(ulang == "y");
        cout << "program selesai.."<<endl;
}