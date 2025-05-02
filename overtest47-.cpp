#include <iostream>
#include <cstdlib>
using namespace std;

// Batu gunting kertas random dengan array
// function
string kondisi(string player, string enemy){
        if (player == "batu"){
            if(enemy == "batu"){
                return "..seri..";
            } else if (enemy == "kertas"){
                return " kalah ";
            } else if (enemy == "gunting"){
                return "menang";
            }
    } else if (player == "gunting"){
        if(enemy == "batu"){
                return " kalah ";
            } else if (enemy == "kertas"){
                return " menang ";
            } else if (enemy == "gunting"){
                return " seri ";
            }
    } else if (player == "kertas"){
        if(enemy == "batu"){
                return "Menang";
            } else if (enemy == "kertas"){
                return " seri ";
            } else if (enemy == "gunting"){
                return "Kalah";
            }
    } else {cout<< "Input anda error!"<<endl;}
}

// procedure
void tampilkan(string player, string enemy){
    string hasil = kondisi (player, enemy);
    cout << "\t Pencapaian Anda Adalah == "<<hasil<<endl;
}
// main program
int main(){
    string isi [3] = {"batu" , "gunting" , "kertas"};
    int pilihan, enemy;
    string ulang;

    do{
        system("cls");
    cout << "Permainan batu gunting kertas..."<<endl;
    // cout << "1. batu \n2. gunting \n3..kertas"<<endl;
        for(int a = 0; a<3; a++){
            cout<<a+1<<". "<<isi[a]<<endl;}
    cout << "player : "; cin >>pilihan;
        enemy =( rand() % 3) + 1;
    cout << "Enemy : "<<enemy<<endl;
    cout<< "=========================="<<endl;
        cout<< "Player   : "<<isi[pilihan-1]<<endl;
        cout<<"\t vs "<<endl;
        cout<< "Computer : "<<isi[enemy-1]<<endl;
        tampilkan(isi[pilihan-1], isi[enemy-1]);
    cout << " ingin mengulangi Game??\n<y/n\n== ";cin>>ulang;
    } while (ulang == "y");
    cout << "Program selesai."<<endl;
}