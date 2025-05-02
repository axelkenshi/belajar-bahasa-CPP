#include <iostream>
using namespace std;

/* increment & decrement  */
/* += , -= , *= , /= ,++ , -- , // , artinya (++)+1. */
int main(){
// post increment
// berfungsi untuk eksekusi operator sesudah variabel.
int x, y;
cout << "############################################"<<endl;
    x = 5;
    cout << x << endl;
    x++;
    cout << x << endl;
    x++;
    cout << x << endl;
    x++;
    cout << x << endl;

cout << "============================="<<endl;


// pre increment
// berfungsi memberikan eksekusi operator sblm variabel.

    y = 5;
    cout << y << endl;
    --y;
    cout << y << endl;
    --y;
    cout << y << endl;
    --y;
    cout << y << endl;


}