#include <iostream>
using namespace std;
//      FIBONACCI DENGAN FUNGSI REKURSIF
// simbol && = dan, simbol || = atau, x==y = sama dengan.
int fibonacci(int n){
    if (n == 0 || n == 1){
        // jika n adalah 1 atau 0 maka tidak akan di looping.
        return n;
    } else {
        // sesuai rumus
        return (fibonacci(n-1) + fibonacci(n-2));
    }
}

int main(){
int n, i, f = 0;
    cout << "Batas deret Fn = "; cin >> n;
    cout << "Deret fibonacci : \n  ";
        for(i = 1; i <= n; i++){
            // i menampilkan f1, f2,f3, dst.
        cout << "F"<< i << " : ";
        cout << fibonacci(f)<<endl;
        f++;
        }
        return 0;
}