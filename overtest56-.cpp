#include <iostream>
using namespace std;
//              FAKTORIAL
// Faktorial adakah perkalian bilangan secara dekrement/mundur.
// 5! = 5 x 4 x 3 x 2 x 1

int faktorial(int x){
    // memberi batasan(if)
    if (x <= 1){
        cout << x << endl;
        return x;
    } else {
        cout << x <<" x ";
        return x * faktorial(x - 1);
    }
}
int main(){
    int angka;
    cout << "angka : "; cin >> angka;
    cout << angka << " Faktorial = "<< faktorial(angka);
    cout << endl;
}