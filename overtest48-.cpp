#include <iostream>
#include <cstdlib>
using namespace std;
        // struct{}; = kumpulan dari beberapa variabel(ngumpulin komponen) . contoh : 
struct nilai
{
    double bindo;
    double mtk;
    double bing;
    double ipa;
    
};

int main(){
    nilai alexandra;
    alexandra.bindo = 100;
    alexandra.bing = 80;
    alexandra.ipa = 70;
    alexandra.mtk = 90;

    cout<<"nilai alex , bahasa indonesia= "<<alexandra.bindo<<endl;
    cout<<"nilai alex , bahasa inggis= "<<alexandra.bing<<endl;
    cout<<"nilai alex , ipa= "<<alexandra.ipa<<endl;
    cout<<"nilai alex , matematika= "<<alexandra.mtk<<endl;
}
