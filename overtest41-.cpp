#include <iostream>
using namespace std;

// koversi suhu
// celcius, reamur, kelvin, farenheit.

// function
double hitungR(double c){
    double r = c * 4/5; 
    return r;
}
double hitungK(double c){
    double k = c + 273;
    return k;
}
double hitungF(double c){
    double f =(c * 9/5) + 32;
    return f;
}

//procedure
void tampilkonvert(double c){
double r, k, f;
r = hitungR(c);
k = hitungK(c);
f = hitungF(c);
    cout<<c <<" derajat celcius "<<endl;
    cout<<r <<" derajat reamur "<<endl;
    cout<<k <<" derajat kelvin "<<endl;
    cout<<f <<" derajat farenheit "<<endl;

}

int main(){
    double c, r, k, f;
    string ulangi;
    do{
cout<<"konversi suhu.."<<endl;
cout<<"masukkan suhu celcius : "; cin >> c; 

tampilkonvert(c);
    cout<<"\n ingin mengulangi program?\n <y/n>\n";
    cin >> ulangi;
system("cls");
    } while(ulangi == "y");
    cout<<"Program selesai."<<endl;
}

