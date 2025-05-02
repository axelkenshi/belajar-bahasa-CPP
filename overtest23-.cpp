#include <iostream>
using namespace std;

/*
for (memiliki 3 parameter){}
while (2 parameter)
do while
foreach --array
*/

int main(){
        // for
/*    int awal, akhir;

    cout << " mular brp? (number)... ";
    cin >> awal;
    cout << " sampe berapa?? ... ";
    cin >> akhir;

    for(int a = awal; a <= akhir; a++){
        cout <<a<< " . saya janji konsisten"<<endl;

    }  */



        // while
/*    int awal, akhir;
    
    cout << " masuukkan variabel awal = " ;
    cin >> awal;
    cout << "masukkan variabel akhir = ";
    cin >> akhir;

    int z = awal;
    while (z >= akhir){
    cout << z << " . spamm tross"<<endl;
    --z;   
    }  */
    

        // do while
/*    int a = 1;
    do{
    cout <<a<< endl;
    //    a++;
    } while (a <= 15);  */
    


    int L, p, l;
        string ulangi;
    do
    {
        cout << "\n======================================"<<endl;
        cout << " masukkan panjang dari persegi = ";
        cin >> p;
        cout << " masukkan lebar dari persegi = ";
        cin >> l;

        L = l * p;
        cout << "luas dari persegi panjang tersebut adalah "<<L<<endl;
        cout << "ingin mengulangi proses berantai ??\nketik (y/n). ";
        cin >> ulangi;
    } while (ulangi == "y");  
    
}