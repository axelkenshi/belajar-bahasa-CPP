#include <iostream>
using namespace std;
                // looping 
int main(){
/*    // pola persegi
    int a, b;
    a = 3;
    b = 3;

    for (int c = 1; c <= a; c++)
    {
        for (int d = 1; d < b; d++){
            cout <<d //"*";
        }
    cout << c //"*"<<endl;
    } */

/*  results :
    12 1
    12 2 
    12 3
*/

    // pola segitiga
    int jumlah;
    cout << "masukkan jumlah bintang : ";
    cin >> jumlah;

    for (int a = 0; a <= jumlah; a++){
        for (int b = 0; b < a; b++){
            cout << "* ";
        }
        cout << "*"<<endl;
    }

}