    // contoh liberary dan namespace.
    // reference liberary & namespace : cplusplus.com
#include <iostream>
#include <cmath>
#include <cstdlib>
    // namespace (std) ==> untuk menghindari konflik dari variabel dg identitas sama namun beda karateristik.
    // contoh membuat namespace sendiri==>>
namespace bil{
    void cetak(int a){
        std::cout<<a<<std::endl;
    }
}
namespace huruf{
    void cetak(std::string a){
        std::cout<<a<<std::endl;
    }
}

using namespace bil;
using namespace huruf;
// penerapan di program utama.
int main(){
    cetak(10);
    cetak(12);
    cetak("Halo");
    cetak("haii guys!!");
    printf("hai\n");
    printf("perulangan random :\n");

    // square root (akar kuadrat), dari #cmath
    double b = sqrt(81);

    for(int a = 0; a < 100; a++){
        // rand = random, angka random dengan tambahan perulangan.
        // random berasal dari #cstdlib
        std::cout<<rand() % 6<<std::endl;
    }
}