#include <iostream>
#include <stdlib.h>
using namespace std;

// menghitung luas persegi & kel.lingkaran.
    double hitungLP(double s){
        double L = s*s;
        return L;
    }
    double hitungKP(double s){
        double K = 4*s;
        return K;
    }

    void tampilan(double s){
        double L = hitungLP(s);
        cout << "luas : "<<endl;
        cout << "L = s x s"<<endl;
        cout << "L = "<<s<<" x "<<s<<endl;
        cout << "L = "<<L<<endl;
        cout << "Luas persegi tersebut adalah "<<L<<" cm2\n"<<endl;
    }
    void tampilankel(double s){
        double K = hitungKP(s);
        cout << "Keliling : "<<endl;
        cout << "k = 4 x s"<<endl;
        cout << "k = "<<4<<" x "<<s<<endl;
        cout << "k = "<<K<<endl;
        cout << "keliling persegi tersebut adalah "<<K<<" cm\n"<<endl;
    }

    int main(){
    double s;
    string lanjut;
    do{
        system("cls");
        cout << "masukkan sisi : "; cin >> s;
        tampilan(s);
        cout<<"========================================"<<endl;
        tampilankel(s);
    cout << "Ulangi? <y/n>\t : "; cin>>lanjut;
    } while(lanjut == "y");
    }