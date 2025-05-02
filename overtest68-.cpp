#include <iostream>
#include <bitset>
using namespace std;
// * OPERASI BITWISE C++
// menggunakan liberary #<bitset>

    //* sekedar method
void set(int a){
    cout << "Output Biner : "<< bitset<8>(a) <<endl;
// menggunakan method/ prosedur-fungsi.
}

void wet(int x){
    cout << "Output desimal a : "<< bitset<8>(x)<<endl;
}
void wat(int y){
    cout << "output desimal b : "<< bitset<8>(y)<<endl;
}
/*main program*/
int main(){
int a;
cout << "Masukkan desimal : "; cin >> a;
set(a);
// formula bitwise == bitset<BIT>(variable) 

cout << "\n==============================================\n"<<endl;
int x = 3;
int y = 5;
wet(x);
wat(y);
    // * operator bitwise :
// not -> kebalikan (0 jadi 1 dan sebaliknya)
cout << "\nbitwise not dilambangkan (~)"<<endl;
cout << "desimal a : "<< x << endl;
cout << "a \t: "; wet (x);
cout << "a~\t: "; wet (~x);

// and -> perkalian (bernilai 1 jika semua nilai 1)
cout << "\nbitwise and (&)"<<endl;
cout << " desimal a : "<< x <<endl;
cout << " desimal b : "<< y <<endl;
cout << "a : "; wet (x);
cout << "b : "; wat (y);
cout << " a & b \t: "; set(x & y);

// or -> penjumlahan (bernilai 0 jika kedua nilainya 0)
cout << "\nbitwise or (|)"<<endl;
cout << " desimal a : "<< x <<endl;
cout << " desimal b : "<< y <<endl;
cout << "a : "; wet (x);
cout << "b : "; wat (y);
cout << " a | b \t: "; set(x | y);

// xor -> (keduanya bernilai sama maka akan 0, jika beda tetap akan 1)
cout << "\nbitwise xor (^)"<<endl;
cout << " desimal a : "<< x <<endl;
cout << " desimal b : "<< y <<endl;
cout << "a : "; wet (x);
cout << "b : "; wat (y);
cout << " a ^ b \t: "; set(x ^ y);

// shift left -> geser kanan
cout << "\nbitwise shift right dilambangkan ( var << x )"<<endl;
cout << "desimal a : "<< x << endl;
cout << "a \t: "; wet (x);
cout << "a << 1\t: "; wet (x << 1);

// shift right -> geser kiri
cout << "\nbitwise shift right dilambangkan (var >> x )"<<endl;
cout << "desimal a : "<< x << endl;
cout << "a \t: "; wet (x);
cout << "a >> 2\t: "; wet (x >> 2);

}