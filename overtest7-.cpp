#include <iostream>
using namespace std;

int main (){
	string kegiatan ;
	string lokasi ;

		cout << "lagi ngapain? \n \tjawabb : " ;
		cin >> kegiatan ;

		cout << " dimana sihh?? \n \tjawabblah :" ;
		cin >> lokasi ;
		cout << "ternyata beliau lagi "<< kegiatan << " di " << lokasi;

return 0;
}
// cin hanya bisa mendeteksi 1 kata aja 
//	 maka dari itu kita bisa perintah getline(cin,ABCDE);
// supaya bisa input lebih banyak kata contoh :	 getline(cin, lokasi) ;

//    \t untuk tab atau sbgai spasi jauh
//    \n untuk line baru atau baris baru	