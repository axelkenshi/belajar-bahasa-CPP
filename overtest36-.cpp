#include <iostream>

using namespace std;

int main(){
    // array multidimensi
    int number[2][3] = {1, 4, 6, 2, 3, 5}; //jumlah index -> 2 x 3 = 6.
    //    [baris][kolom]. contoh dimensi ke 0 indeks ke 1. 
    // semisal [(0)]=dimensi index array ke-0, value [(2)]=nilai ke-2.
        cout<<number[0][2]<<endl;
    // 1 2 6
    // 2 3 5 
    /*
    [0][0] = 1
    [0][1] = 4
    [0][2] = 6

    [1][0] = 2
    [1][1] = 3
    [1][2] = 5
    */

    /*cout <<"\n ================================"<<endl;
    cout<<number[0][0]<<" "; 
    cout<<number[0][1]<<" "; 
    cout<<number[0][2]<<endl; 

    cout<<number[1][0]<<" "; 
    cout<<number[1][1]<<" "; 
    cout<<number[1][2]<<endl; */    

for(int a = 0; a < 2; a++){
    for (int b = 0; b < 3; b++ ){
        cout<<number[a][b]<<" ";
    }
    cout <<endl;
}
}