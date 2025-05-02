#include <iostream>
#include <stdlib.h>
using namespace std;
/*int main (){
// const int baris = 2;
// const int kolom = 3;
// int number[baris][kolom] = {1, 4, 6, 2, 3, 5};
// for(int a = 0; a < baris; a++){
//     for (int b = 0; b < kolom; b++ ){
//         cout<<number[a][b]<<" ";
//     }
//     cout <<endl;
// }

}
*/
/*varibel kalau punya nilai maka saat cout akan tampil nilainya*/
// prosedur -> tidak memiliki nilai kembali
void siswa(){
    string name = "steve";
    string jenis_kel = "Pria 100%.";
    cout << name<<" adalah seorang "<<jenis_kel<<endl;
}

// fungsi -> memiliki nilai kembali
string siswi(){
    string name ="alexadra";
    string jenis_kel = " cewek tulen.";
    return (name + " adalah seorang"+jenis_kel);
}
    int main(){
        siswa();
        cout<<siswi  ();
    }