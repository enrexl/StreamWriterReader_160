#include<exception> //Library untuk object Exception
#include <array> //Library objek array yang akan digunakan
#include <iostream>
using namespace std;

int main()
{
	cout << "Awal Program" << endl;	//Penanda 1:...
	try {
		array<int, 3> data = { 1,2,3 }; // pesan arry integer 1 element
		cout << data.at(2) << endl;		// Memanggil elemen array ke 3
	}
	catch (exception& e) { //Penangkap object exception
		cout << e.what() << endl;		//Eksekusi akan dilakukan jika kode try benar
	}
	
		cout << "Baris Program yang Terakhir" << endl; 
		/*Menandakan bahwa program berjalan sampai baris 
		terakhir walau terdapat kesalahan*/
	
}


