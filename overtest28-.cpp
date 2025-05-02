#include <iostream>
using namespace std;

// average array
//jumlah indeks harus integer.
int main (){

//menghitung rata rata.  

/*    int jmlh_index;
    cout << "masukkan jumlah index = ";
    cin >> jmlh_index;

    // supaya akurat pakai float / double.
    float nilai[jmlh_index], total, ratata;
        for (int a = 0; a < jmlh_index; a++)
        {
            cout <<" jumlah ke- "<<a<<" = ";
            cin >> nilai[a];
    // penugasan
    total += nilai[a];
        }
cout <<"=================================\n"<<endl;
cout << "total bernilai = "<<total<<endl;
    ratata = total/jmlh_index;
cout <<" jumlah rata-rata = "<<ratata<<endl;
    
*/

// menghitung rata rata deret angka.
    // tanpa array.
    float jmlh_nilai, nilai, total, rata;
    cout<<"jumlah index = ";
    cin>> jmlh_nilai;

    for (int a = 0; a < jmlh_nilai; a++ ){
        cout << "=============================="<<endl;
        cout << "masukkan data ke- "<<a<<" = ";
        cin>> nilai;
        total += nilai;
    }
        cout << "\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
        cout << "total nilai = "<<total<<endl;
        rata = total / jmlh_nilai;
        cout << "Rata-rata nilai adalah = "<<rata<<endl;
        cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n"<<endl;
}
