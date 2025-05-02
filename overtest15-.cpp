#include <iostream>
using namespace std;

// operator logika

int main(){

    bool output;
    output = 2 == 4;  //0
// 0 artinya false , 1 artinya true
// contoh 2 senilai dengan 2, maka 1 true
// benar/salah termasuk boolean   
//  tidak atau not = !(value); jadi kebalikan 
    output = !(2 == 5); //1
    output = !(5==5); //0

//  and (mirip perkalian) jika kedua value sesuai maka benar/sebaliknya
//  dia akan true jika semmua kondisi benar
// dia akan false jika salah satu kondisi salah
// 1 and 1 = 1 ,, 0 and 1 = 0 ,, 0 and 0 = 0
    output = (2 < 4) and (2 > 1) ;//1
    output = (2 < 5) and (2 < 1) ;//0

// or (mirip penjumlahan)
// dia bernilai salah ketika semua kondisinya salah.
// 
//  output = (2 < 4) or (2 > 1) ;//1 or 1 =1
//  output = (2 < 5) or (2 < 1) ;//0 or 1 =1
    output = (2 > 4 ) or (2 >1); // 0 or 1 = 1
    output = ( 2 < 1) or (2 > 3); // 0 or 0 = 0
cout << output <<endl; 

/*untuk bilangann biner adalah 1 true dan 0 false.*/
}