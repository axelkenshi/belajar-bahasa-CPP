#include <iostream>
#include <cstdlib>
using namespace std;
// nesting struct (struct di dalam struct)
struct guru{
    string nama;
    int umur;
};

struct mapel{
    string nama_mapel;
    double kkm;
    string status;

    // memanggil sang guru
    guru guru1, guru2;
};

int main(){
    guru guru1, guru2;
    mapel mapel1, mapel2;

guru1.nama = "graham";
guru1.umur = 26;
guru2.nama = "cornein";
guru2.umur = 24;

    mapel1.guru1= guru1;
    mapel2.guru2= guru2;

mapel1.nama_mapel = "Fisika";
mapel1.kkm = 80;
mapel1.status = "wajib";
mapel1.guru1 = guru1;

mapel2.nama_mapel = "matematika";
mapel2.kkm = 75;
mapel2.status = "peminatan";
mapel2.guru2 = guru2;

// guru1 sebuah inisial bukan variabel dan (inisial memiliki komponen sendiri)!
    cout<<"nama mapel\t= "<<mapel1.nama_mapel<<endl;
    cout<<"kkm mapel\t= "<<mapel1.kkm<<endl;
    cout<<"status mapel\t= "<<mapel1.status<<endl;
        cout <<"\nnama guru 1\t= "<< mapel1.guru1.nama<<endl;
        cout <<"usia guru 1\t= "<<mapel1.guru1.umur<<endl;
    
    cout <<"============================"<<endl;
    cout<<"nama mapel\t= "<<mapel2.nama_mapel<<endl;
    cout<<"kkm mapel\t= "<<mapel2.kkm<<endl;
    cout<<"status mapel\t= "<<mapel2.status<<endl;
        cout <<"\nnama guru 2\t= "<<mapel2.guru2.nama<<endl;
        cout <<"usia guru 2\t= "<<mapel2.guru2.umur<<endl;
}