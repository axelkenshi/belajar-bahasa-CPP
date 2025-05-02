#include <iostream>
using namespace std;

//      FIBONACCI
// fibonacci adalah jumlah angka sekarang, dari penjumlahan kedua angka sebelumnya.

/*int main(){
int limitInput;
    cout << "\tThis is Fibonacci"<<endl;
    cout << "Limit ke n ( Using Digits ) : ";
    cin >> limitInput;
    

    int f1;
    cout << "F1 : ";
    cin >> f1;

    int f2;
    cout << "F2 : ";
    cin >> f2;

    cout << f1 << endl;
    cout << f2 << endl;

    int temp;

    for (int i = 3; i <= limitInput; i++) {

        temp= f1 + f2;
        cout << temp << endl;
        f1 = f2;
        f2 = temp;

    } 
}*/

int main(){
    int f1 = 1, f2 = 2, limit_input;
    cout << "\tPerhitungan fibonacci"<<endl;
    cout << "Batas ke n = "; cin >> limit_input;
    cout << "F1= "; cin >> f1;
    cout << "F2= "; cin >> f2;
    int temp = 0;
    cout << f1 << ", ";
    cout << f2 << ", ";
        for (int a = 3; a <= limit_input; a++){
            temp = f1 + f2;
            cout <<temp;
                if (a != limit_input){
                    cout << ", ";
                }
                f1 = f2;
                f2 = temp;
        }
}
