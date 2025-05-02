#include <iostream>
using namespace std;

int main(){
    /*mencari nilai min-max tanpa array */
    int jmlh_index, nilai, min, mak;
        cout<< "Mau berapa data ?\n ";
        cin>> jmlh_index;

    for (int a = 1; a <= jmlh_index; a++){
        cout << " ======================================"<<endl;
        cout << " masukkan data ke- "<<a<<" = ";
        cin >> nilai;

        if (nilai > mak){
            mak = nilai;
        }
        if ( nilai < mak){
            min = nilai;
        }
        
    }
    cout << "~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
    cout << " nilai maksimum adalah = "<<mak<<endl;
    cout << " nilai minimum adalah = "<<min<<endl;



}