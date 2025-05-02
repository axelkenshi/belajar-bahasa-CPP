#include <iostream>
#include <cstdlib>
        // rand (random integer / angka rangdom)
using namespace std;
// rand() % 123
int main(){
/*for (int a = 0; a < 10; a++)
{
    cout << rand() % 50 << endl;
}
*/
string ulangi;
do{
system("cls");
    cout << " nilai jumlah random.. "<<endl;
    cout << rand() % 1000 <<endl;
    cout << "ulangi? <y/n>\n"; cin >> ulangi;
} while (ulangi=="y");
    cout << "program selesai.."<<endl;
}