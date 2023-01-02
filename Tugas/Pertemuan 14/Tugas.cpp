#include <iostream>

using namespace std;
int Pilihan, JmlData;
int main(){
	cout << "Inputkan jumlah data mahasiswa : ";
	cin >> JmlData;
	cout << endl;
	int NilaiMhs[JmlData];

	for (int i=0; i<JmlData; i++){
		cout << "Inputkan Nilai Mahasiswa ke-" << i+1 << " Nilai antara 1-100 : ";
		cin >> NilaiMhs[i];
	}
	cout << endl;
	int Maks = NilaiMhs[0];
	int Minim = NilaiMhs[0];
	for (int i=1; i<JmlData; i++){
		if (NilaiMhs[i] > Maks){
			Maks = NilaiMhs[i];
		}
		if (NilaiMhs[i] < Minim){
			Minim = NilaiMhs[i];
		}
	}
	cout << "Pilihan 0 : Tampilkan Nilai Maksimum dan Minimum Mahasiswa" << endl;
	cout << "Pilihan 1 : Tampilkan Hanya Nilai Maksimum Mahasiswa" << endl;
	cout << "Pilihan 2 : Tampilkan Hanya Nilai Minimum Mahasiswa" << endl;
	cout << endl;
	cout << "Pilihan mana yang anda pilih? : ";
	cin >> Pilihan;
	cout << endl;
	switch(Pilihan){
		case 0:
			cout << "Nilai Maksimum = " << Maks << endl;
			cout << "Nilai Minimum = " << Minim << endl;
			break;
		case 1:
			cout << "Nilai Maksimum = " << Maks << endl;
			break;
		case 2:
			cout << "Nilai Minimum = " << Minim << endl;
			break;
		default:
			cout << "Pilihan yang anda input salah" << endl;
			break;
	}
}
