#include <iostream>

using namespace std;
//  enum = data yang pasti dan gak perlu di ubah2.
// sama dengan index, dimulai dari nol.
enum hari{
    monday, tuesday, wednesday, thursday, friday, saturday, sunday
};

int main(){
    hari sekarang, jadwal;
    
    cout << "Alat penghitung dedline anda..."<<"\nSilahkan pilih hari(inggris) : "<<"\nmonday, tuesday, wednesday, thursday,\n friday, saturday, sunday.\n"<<endl;
    cout <<"masukkan hari sekarang = "; 
    cin >> sekarang;
    cout << "masukkan jadwal anda-- hari H = ";
    cin >> jadwal;
// studycase kelupaan jadwal kemaren.
    int selisih = jadwal - sekarang;
        if(sekarang < jadwal ){
            cout << " jadwal saya sekarang " <<selisih<<" hari lagi" <<endl;
        } else if(sekarang > jadwal){
            cout << " jadwal saya sekarang " <<selisih * -1<<" hari lalu" <<endl;
        } else {
            cout <<" jadwal anda dimulai hari ini!!"<<endl;
        }
    
}