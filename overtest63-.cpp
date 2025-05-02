#include <iostream>
using namespace std;
//  function dengan POINTER
// fungsi == method

void nilai(int *y){
    cout << "alamat parameter : "<<y<< endl;
    cout << "nilai parameter : "<<*y<< endl;
}
void kuadrat(int *a){
    *a = *a * *a;
}
int main(){
int x= 15;
nilai (&x);
cout << "Angka : "<<x<<endl;
kuadrat(&x);

cout << "kuadrat : "<< x << endl;
}