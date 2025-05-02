#include <iostream>
using namespace std;

int main(){
    // menjumlahkan seluruh array dg method perulangan.
    // array count

    int jmlh_item;
        cout << "\n================================="<<endl;
    cout <<"masukkan jumlah item yg di inginkan = ";
    cin>> jmlh_item;

    int harga[jmlh_item];
    int total;

    for(int a = 0; a < jmlh_item; a++){
        cout <<"harga item ini- "<<a<<" = ";
        cin >> harga[a];        
    }

    cout <<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
    cout <<"jumlah item = "<<jmlh_item<<endl;

    for (int b = 0; b < jmlh_item; b++){
        total += harga[b];
    }
        cout <<" Total harga yang dibayar adalah = $ "<<total<<endl;
}