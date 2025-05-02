#include <iostream>
using namespace std;
// function in struct
struct mhs{
    string nim;
    string nama;
    int nilai;
};

// karakter// memberi peringkat
char grades(int n){
    if (n > 85){
        return 'A';
    } else if (n > 75 && n <= 85){
        return 'B';
    } else if (n > 65 && n <= 75){
        return 'C';
    } else if (n > 30 && n <= 65){
        return 'D';
    } else {return 'F';
    }
}
//main program
int main(){
    int siswa;
    cout << "Jumlah mahasiswa = "; cin >> siswa;
        mhs mahasiswa[siswa];   
        for (int a = 0; a < siswa; a++){
            cout << "data ke-"<<a+1<<endl;
            cout << "nim : "; cin >> mahasiswa[a].nim ;
            cout << "nama : "; cin >> mahasiswa[a].nama;
            cout << "nilai : "; cin >> mahasiswa[a].nilai;
        cout << endl;
        }
        cout << "\n================================="<<endl;
        cout << "\t OUTPUT"<<endl;
            for (int b = 0; b < siswa; b++){
            cout << "Data ke-"<<b+1<<endl;
            cout << "nim : "<< mahasiswa[b].nim <<endl;
            cout << "nama : "<< mahasiswa[b].nama<<endl;
            cout << "nilai : "<< mahasiswa[b].nilai<<endl;
            cout << "Grade == "<< grades(mahasiswa[b].nilai)<<endl;
            cout <<endl;
            }
}