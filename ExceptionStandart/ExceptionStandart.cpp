#include<exception> //Library untuk object Exception
#include <array> //Library objek array yang akan digunakan
#include <iostream>
using namespace std;

int main()
{
	cout << "Awal Program" << endl;	//Penanda 1:...
	try {
		array<int, 3> data = { 1,2,3 }; // pesan arry integer 1 element
		cout << data.at(3) << endl;		// Memanggil elemen array ke 3
	}
}
