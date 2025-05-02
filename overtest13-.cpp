#include <iostream>
using namespace std;

int main(){

int V, s;
cout << "--menghitung volume dari kubus--\n==============================";
cout << "\nmasukkan sisi\t = ";
cin >> s;

V = s * s * s;

cout <<"Diketahui : "<<endl;
cout <<"Jumlah sisi\t = "<< s << " cm " <<endl;
cout << "Jawab : "<< endl;
    cout << " V = S x S x S\n V = "<<s<<"x"<<s<<"x"<<s<< endl;
    cout << "V = "<< V <<endl;
cout<< "\njadi jumlah volume kubus adalah = "<<V<<" cm3"<<endl;
}