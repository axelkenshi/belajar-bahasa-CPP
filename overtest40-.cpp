#include <iostream>
using namespace std;

// menghitung persegi panjang dg method
/*double hitungL (double l, double p){
    double L = p * l;
    return L;
}
double hitungK (double l, double p){
    double K= 2*(p + l);
    return K;
}

void tampilanluas(double l, double p){
    double L = hitungL(p, l);
    cout << "Luas..."<<endl;
    cout <<"L = p x l"<<endl;
    cout <<"L = "<<l<<" x "<<p<<endl;
    cout <<"L = "<<L<<endl;
    cout <<"\n=================================="<<endl;
}
void tampilkel(double l, double p){
    double K = hitungK(p,l);
    cout <<"Keliling..."<<endl;
    cout <<"K = 2 x (p x l)"<<endl;
    cout <<"K = "<<p<<" x "<<l<<endl;
    cout <<"K = "<<K<<endl;
}

int main(){

double p, l;
string ulangi;
do{
    cout <<"Menghitung luas dan keliling persegi panjang..."<<endl;
    cout <<"masukkan nilai P = "; cin >>p;
    cout <<"masukkan nilai L = "; cin >>l;
tampilkel(l, p);
tampilanluas(l, p);
    cout<<"Ingin mengulangi proses?\n<y/n>"<<endl;
    cout<<"masukkan perintah : "; cin >>ulangi;
system("cls");
} while(ulangi =="y");
    
}*/

// =============================================1

    // menghitung luas segitiga.
/*double hitungL(double a, double t){
    double L = 0.5 * a * t;
    return L;
}
void tampilL(double a, double t){
    double L = hitungL(a, t);
    cout << "L = 0.5 c a x t"<<endl;
    cout << "L = 0.5 x "<<a<<" x "<<t<<endl;
    cout << "L = "<<L<<"\n"<<endl;
}
    int main(){
        string lanjutkan;
        double a, t;
        system("cls");
        do{
            cout << "Menghitung luas segitiga..."<<endl;
            cout << "masukkan alas : "; cin >>a;
            cout << "masukkan tinggi : "; cin>>t;
            tampilL(a, t);
            cout << "lanjut? <y/n>\n"<<endl;
        } while(lanjutkan == "y");
}
*/

// =======================================2
// Menghitung luas segitiga.

// fungsi
// const double phi = 3.14;
// double hitungL(double r){
//     double L = phi * (r * r);
//     return L;
// }
// double hitungK(double r){
//     double d = 2 * r;
//     double K = phi * d;
//     return K;
// }
// // prosedur
// void tampilL(double r){
//     double L = hitungL(r);
//     cout <<"luas = "<<endl;
//     cout << "L = phi x (r x r)"<<endl;
//     cout << "L = "<<phi<<" x ("<<r<<" x "<<r<<" )"<<endl;
//     cout << "L = "<<L<<endl;
// }
// void tampilK(double r){
//     double K = hitungK(r);
//     double d = 2 * r;
//     cout<<"Keliling = "<<endl;
//     cout<<"K = phi x d"<<endl;
//     cout<<"K = "<<phi<<" x "<<d<<endl;
//     cout<<"K = "<<K;
// }
// int main(){
// double r;
// double d;
// string ulangi;
// do{
// cout<<"menghitung luas & keliling lingkaran...\t"<<endl;
// cout<<"masukkan r : "; cin>> r;
// cout<<"masukkan d : "; cin >>d;
// tampilL(r);
// tampilK(r);
// cout<<"\ningin mengulangi program? <y/n>\n"; cin>>ulangi;
// }while(ulangi == "y");
// system("cls");
// }

int No;
const double phi = 3.14;
double hitungL(double r){
	double L = phi * (r * r);
	return L;
}
double hitungK(double r){
	double d = 2 * r;
	double K = phi * d;
	return K;
}

void tampilL(double r){
	double L = hitungL(r);
	cout<<"Luas : "<<endl;
	cout<<"L \t= phi x ( r x r )"<<endl;
	cout<<"L \t= "<<phi<<" x ( "<<r<<" x "<<r<<" )"<<endl;
    cout<<"L \t= "<<L<<endl;
}

void tampilK(double r){
	double K = hitungK(r);
	double d = 2 * r;
	cout<<"Keliling : "<<endl;
	cout<<"K \t= phi x d"<<endl;
	cout<<"K \t= "<<phi<<" x "<<d<<endl;
	cout<<"K \t= "<<K;
}

int main(){
	//L = phi x r x r
	//k = phi x d
	double r;
	string lanjut;
	do{
		system("cls");
		cout<<"PROGRAM MENGHITUNG LUAS & KELILING LINGKARAN"<<endl;
		cout<<"Pilih salah satu : "<<endl;
		cout<<"1. Luas Lingkaran "<<endl;
        cout<<"2. Keliling Lingkaran "<<endl<<endl;
        cout<<"Pilihan Anda : ";cin>>No;


    if (No==1){
		
		cout<<"masukan r : "; cin>>r;
    	tampilL(r);
    }
    	
    else if(No==2){
		
    	cout<<"masukan r : "; cin>>r;
    	tampilK(r);
    }
    	
    	cout<<"\nlanjut <y/n> : "; cin>>lanjut;
	}
	while (lanjut == "y");
	system("cls");
	cout<<"Program Selesai"<<endl;
	
}