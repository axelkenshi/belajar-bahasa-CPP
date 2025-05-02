#include <iostream>
using namespace std;

int main(){
    // sorting array
 // int nilai[] = {9, 4, 6, 7, 1, 5, 2, 8, 3};
/*int nilai[] = {7, 3, 5, 10, 1, 6, 4, 2, 8, 9};
int lenght = sizeof(nilai)/(*nilai);
int temporary;

for (int a = 1; a < lenght; a++){
    for (int b = 0; b < lenght-a; b++){

        if(nilai[b] > nilai[b+1]){
            temporary = nilai[b];
            nilai[b] = nilai [b+1];
            nilai[b+1] = temporary;

        }
    }
    for(int c = 0; c < lenght; c++){
        cout << nilai[c] << " | ";
    }
cout << endl;
}
cout << " Hasil sorting : "<<endl;
for(int x = 0; x < lenght; x++){
    cout <<" "<<nilai[x]<<endl;

}
*/

// sorting array menggunakan inputan.
// menampilkan
int lenght;
cout << "masukkan jumlah index = ";
cin >> lenght;
int nilai[lenght];
int temp;

// jumlah index
for (int b = 0; b < lenght; b++){
    cout<< " inputkan index ke- "<<b<<" : ";
    cin >> nilai[b];
}
// mengurutkan
for (int a = 1; a < lenght; a++){
    for (int b = 0; b < lenght-a; b++){

        if(nilai[b] > nilai[b+1]){
            temp = nilai[b];
            nilai[b] = nilai [b+1];
            nilai[b+1] = temp;

        }
    }
    for(int c = 0; c < lenght; c++){
        cout << nilai[c] << " | ";
    }
cout << endl;
}
cout << " Hasil sorting : "<<endl;
    for(int x = 0; x < lenght; x++){
    cout <<" "<<nilai[x]<<endl;

    }
}