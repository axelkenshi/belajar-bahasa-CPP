#include <iostream>
using namespace std;

/*if & else*/
// jika dan diluar jika

int main(){
    int biaya, total;
    cout <<"\nsilahkan lakukan pembayaran..."<<endl;
    cout<< "biaya pembelanjaan anda = Rp. ";
    cin>> biaya;
if(biaya >=10000){
    total = biaya - 3000;
    cout << "\tanda dapat potongan!"<<endl;
} else {
    total = biaya;
    cout <<"kamu tidak mendapat diskon..."<<endl;
}

cout <<"biaya awal anda = "<<biaya<<endl;
 cout << "jumlah potongan anda : rp. "<<3000<<endl;
cout <<" ===================================="<<endl;
cout <<"total pembayaran =Rp. "<<total<<endl;
}
