#include <iostream>
using namespace std;

// membuat kasir sederhana dengan swich case saja.

int main(){
    int harga, jmlh_barang, pilihan, total;
    string item;

    cout << "\tSelamat datang..."<<endl;
    cout << "\n======================================="<<endl;
    cout << " select the item requied : "<<endl;
    cout << "1.shampo \t: $ 1000 \n2.sabun \t: $ 1500 \n3.odol \t\t: $ 3000 \n4.deterjen \t: $ 2500 \n5.conditioner \t: $ 4000 \n6.konfirmasi payment."<<endl;
    cout << "\n======================================="<<endl;
    
    do {
    cout << "Masukkan item...\n=";
    cin >> pilihan;
        switch (pilihan)
        {
        case 1:
            item = "shampo";
            harga = 1000;
            cout << "jumlah item : ";
            cin >> jmlh_barang;
            total += harga * jmlh_barang;
            cout<< jmlh_barang<<" "<<item;
            cout << " = $ "<< harga*jmlh_barang <<endl;
            break;
        case 2:
            item = "sabun";
            harga = 1500;
            cout << "jumlah item : ";
            cin >> jmlh_barang;
            total += harga * jmlh_barang;
            cout<< jmlh_barang<<" "<<item;
            cout << " = $ "<< harga*jmlh_barang <<endl;
            break;
        case 3:
            item = "odol";
            harga = 3000;
            cout << "jumlah item : ";
            cin >> jmlh_barang;
            total += harga * jmlh_barang;
            cout<< jmlh_barang<<" "<<item;
            cout << " = $ "<< harga*jmlh_barang <<endl;
            break;
        case 4:
            item = "deterjen";
            harga = 2500;
            cout << "jumlah item : ";
            cin >> jmlh_barang;
            total += harga * jmlh_barang;
            cout<< jmlh_barang<<" "<<item;
            cout << " = $ "<< harga*jmlh_barang <<endl;
            break;
        case 5:
            item = "conditioner";
            harga = 4000;
            cout << "jumlah item : ";
            cin >> jmlh_barang;
            total += harga * jmlh_barang;
            cout<< jmlh_barang<<" "<<item;
            cout << " = $ "<< harga*jmlh_barang <<endl;
            break;
        case 6:
            cout <<"Total belanja : $ "<<total<<endl;
            pilihan = 6;
            cout << " Terimakasih!.."<<endl;
            break;
        default:
        cout << "Inputan anda tidak valid!"<<endl;
            break;
        }
    } while (pilihan != 6);

    
}   