#include <iostream>
using namespace std;
// REKURSIF 
/*(   Adalah sebuah perulangan yang sifatnya seperti looping,
dia termasuk sebangai function/method dan bisa memanggil dirinya sendiri.)*/
    // contoh

void rekursif(int n){
    if (n > 0){
    cout <<"ini rekursif"<<endl;
    n--;
    rekursif(n);
    }
}
int main(){
    rekursif(5);
}