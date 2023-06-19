#include<fstream>
#include<iostream>
#include<string>>
using namespace std;

int main() {
	string baris;
	string namaFile;

	cout << "Masukkan Nama File : ";
	cin >> namaFile;

	// membuka file dalam mode menulis
	ofstream outfile;
	//menunjuk ke sebuah nama file
	outfile.open(namaFile + ".txt", ios::out);

	cout << ">= Menulis file, \'q\q untuk keluar" << endl;

	//unlimited loop untuk menulis
	while (true) {
		cout << "- ";
		//mendapatkan setiap karakter dalam satu baris
		getline(cin, baris);
		//loop akan berhenti jika anda memasukan karakter q
		if (baris == "q") break;
		//menulis dan memasukkan nilai dari 'baris' ke dalam file
		outfile << baris << endl;
	}
	//selesai dalam menulis sekarang tutup filenya
	outfile.close();

	//membuka file dalam mode membaca
	ifstream infile;
	//menunjuk ke sebuah file
	infile.open(namaFile + ".txt", ios::in);

	cout << endl << ">= Membuka dan Membaca file " << endl;
	//jika file tersedia, maka
	if (infile.is_open()) {
		//melakukkan perulangan setiap baris
		while (getline(infile, baris)) {
			//dan tampilkan di sini
			cout << baris << '\n';
		}
		//tutup file tersebut setelah selesai
		infile.close();
	}
	//jika tidak ditemukan file maka akan menampilakan hal tersebut
	else cout << "Unable to open file!";
	return 0;
}