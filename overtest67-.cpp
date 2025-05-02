#include <iostream>
#include <sstream>
using namespace std;

// *    KONVERSI DESIMAL KE BINER C++
/*
notasi bilangan biner.

kasus konversi desimal ke biner
(kelipatan dari angka sebelumnya)

metode  :
contoh -> desimal = 10
	8 + 2 = 1010 //biner	

	desimal = 6
	4 + 2 = 110 //biner

	desimal = 45
	32 + 8 + 4 + 1 = 101101 //biner
triknya kita jumlahkan bilangan yg berisi 1 dlm biner(0 gk di anggap hanya sampai 1 di suku terakhir).

128	64		32		16		8		4		2		1	
            1		0		1		1		0		1	
*/

// desimal harus bilangan bulat gk boleh koma.

int main(){
    int desimal, sisa;
    string hasil, temp;
    cout << "desimal : "; cin >> desimal;

    for (int a = desimal; a > 0; a /= 2){
        stringstream binarydigit;
        
        sisa = a % 2;

        binarydigit << sisa;
        binarydigit >> temp;

        hasil += temp;

    }
    // -1 karena ada spasinya, b mulai dari array ke 0, b-- dibalik
    for (int b = hasil.length()-1; b >= 0; b--){
        cout << hasil[b];
    }
}