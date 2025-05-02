#include <iostream>
using namespace std;

int main (){
        // swich case
        // case akan meneruskan percabangan lainnya
        // break; untuk menghentikan case selanjutnya.
        //  default sama seperti else, sbgai pengecualian.
    int plhn;
    string jeniskl;
    cout <<"pilihlah antaraa : "<<endl;
    cout <<"1. laki2 \n 2. perempuan \n 3. netral"<<endl;
    cout <<"\t=================================="<<endl;
    cout <<"Pilihkah berikut : ";
    cin >> plhn;

switch (plhn)
{
case 1 :
    jeniskl = "laki-laki";
    break;
case 2 :
    jeniskl = "perempuan";
    break;
case 3 :
    jeniskl = "non gender";
    break;
default:
    jeniskl = "apaan sih??";
    break;
}

cout << "jenis kelamin anda adalah "<< jeniskl ;



}