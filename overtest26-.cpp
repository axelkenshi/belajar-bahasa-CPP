#include <iostream>
using namespace std;
        // array / larik
int main (){
/*    string anggota [3] = {"beny","fenr","arthur"};
    int nilai [4] = {22, 23, 24, 25};
    cout << nilai [0] <<endl;
    cout << nilai [1] <<endl;
    cout << nilai [2] <<endl;
    cout << nilai [3] <<endl;

    cout <<"===================================="<<endl;
    cout << anggota [0]<<endl;
    cout << anggota [2]<<endl;
*/

        // array 1 dimensi
/*        int jmlh_arry;
    int angka[] = {11, 15, 17, 19, 20, 24, 26 };
        jmlh_arry = sizeof(angka)/sizeof(*angka);
        cout <<"jumlah dari array yaitu ; "<<endl;
        cout << jmlh_arry <<endl;
        cout <<"menampilkan seluruh array \n"<<endl;

        for (int a=0; a < jmlh_arry; a++){
            cout << angka[a]<<endl;
    }
*/

        // contoh array menggunakan looping
    int jmlh_arry; 
    cout <<" masukkan jumlah array yg di inginkan = ";
    cin >> jmlh_arry;
    int angka[jmlh_arry];
    //  int jmlh_arry = sizeof(angka)/sizeof(*angka);

    for (int a = 0; a < jmlh_arry; a++){
        cout << "masukkan index yang di inginkan "<<a<<" : ";
        cin >> angka[a];
    }
    cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
    cout << "Nilai yang tersimpan = "<<endl;
    cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
        for (int b = 0; b < jmlh_arry; b++){
        cout <<" index ke- "<<b<<" : "<<angka[b]<<endl;
        }

}