#include <iostream>

using namespace std;
//      POINTER C++ => (penunjuk)
// menunjuk alamat sebuah varabel di sebuah memory.
// * | * reference --> menyimpan alamat dari variable di memory
// * | & deference --> mengetahui alamat dari sebuah variable.
// satu alamat di isi satu variable.
int main(){
int a = 10;
int b;
int *c = &a;
//* d isi asli dari var.C.
int d = *c;
cout << "alamat dari variabel A : "<< &a;
cout << "\nalamat dari variabel B : "<<&b;
cout <<"\nsimpan alamat var lain C>(A) : "<<c<<endl;
cout << "\nisi milik variabel C>(D) : "<<d<<endl;

cout << "\n=========================\n"<<endl;

string f = "tempe";
int g;

string *h = &f;
string j = *h;

cout << "Alamat var F : "<<&f<<endl;
cout << "Alamat var G : "<<&g<<endl;
cout << "simpen alamat si H dari F : "<<h<<endl;
cout << "isi milik var H di j : "<<j<<endl;
}