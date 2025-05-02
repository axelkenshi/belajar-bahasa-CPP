#include <iostream>
using namespace std;

// simulasi kasir sederhana

int main(){
    int gandum, susu, kedelai, jagung, beras, pajak;
    int j_gandum, j_susu, j_kedelai, j_jagung, j_beras;
    int hasil, total;
        string ulangi;

    gandum = 5000, susu = 10000, kedelai = 6000, jagung = 7000, beras = 8000, pajak = 2000;
do
{
    cout << "\n\n\tirrashaii maseeei !!" << "\n==============================================="<<endl;
    cout << "Silahkan lihat list harga.."<<endl;
    cout << "gandum = "<<gandum<< " /pcs"<<endl;
    cout << "susu = "<<susu<< " /pcs"<<endl;
    cout << "kedelai = "<<kedelai<< " /pcs"<<endl;
    cout << "jagung = "<<jagung<< " /pcs"<<endl;
    cout << "beras = "<<beras<< " /pcs"<<endl;
        cout << "\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
        cout <<"\tSilahkan pesan sesuai menu..."<<endl;
        cout <<"pilihlah (0 = tidak), (jumlah = number1234)\n"<<endl;
        cout <<"jumlah gandum (500g)=  ";
        cin >> j_gandum;
        cout <<"jumlah susu (50ml)=  ";
        cin >> j_susu;
        cout <<"jumlah kedelai (500g)=  ";
        cin >> j_kedelai;
        cout <<"jumlah jagung (1kg)=  ";
        cin >> j_jagung;
        cout <<"jumlah beras (1kg)=  ";
        cin >> j_beras;

        cout << "\n**struk pembayaran : "<<endl;
        cout << "gandum = "<<gandum<<" * "<<j_gandum << endl;
        cout << "kedelai = "<<kedelai<<" * "<<j_kedelai << endl;
        cout << "susu = "<<susu<<" * "<<j_susu << endl;
        cout << "jagung = "<<jagung<<" * "<<j_jagung << endl;
        cout << "beras = "<<beras<<" * "<<j_beras << endl;
            cout << "############"<<endl;
            cout << "total pembelian : "<<endl;
            hasil = (gandum*j_gandum) + (kedelai*j_kedelai) + (susu*j_susu) + (jagung*j_jagung) + (beras*j_beras);
            cout << "biaya : \nRp. "<<hasil<<endl;
        if (hasil >= 100000)
        {
        total = (hasil - 10000) + pajak;
        cout << "anda dapet potongan 1% !!\n"<<"Fee : + "<<pajak<<endl;
        cout << "Total = Rp. "<<total<<endl;
        } else {
        total = hasil + pajak;
        cout << " tidak ada diskon..\n"<<"Fee : + "<<pajak <<"\nTotal = Rp. "<<total<<endl;
        }
        cout <<"terimakasih pembeliannya!"<<endl;

        cout << "\n\t===================================="<<endl;
        cout << "ingin berbelanja lagi ??\nketik (y/n). ";
        cin >> ulangi;
} 
while (ulangi == "y");




}