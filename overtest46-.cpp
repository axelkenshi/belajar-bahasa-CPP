#include <iostream>
#include <cstdlib>
using namespace std;

// Game lempar dadu
int main(){
    int pil, user, robot;
    string lanjut;
    do{
    system("cls");
    cout <<" Game lempar dadu "<<endl;
    cout <<" 1. melempar \n 2. keluar \n\tInputkan pilihan : ";
    cin >> pil;

if(pil == 1){

    user = (rand() % 6) + 1;
    robot = (rand() % 6) + 1;
    cout <<"player : "<<user<<endl;
    cout <<"Enemy : "<<robot<<endl;

            if (user > robot){
                cout <<"You win!!"<<endl;
            } else if (user < robot){
                cout<< "You lose~~"<<endl;
            } else { cout<<"You 1 : 1"<<endl;}
        cout <<"Ingin melanjutkan Game? \n <y/n>\n=="; cin >> lanjut;
        } else if (pil == 2){
            lanjut = "n";
        } else {
            cout <<"Error 404"<<endl;
        }
    
    } while(lanjut =="y");
    system("cls");
    cout << "Game over"<<endl;
}
