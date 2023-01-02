#include <iostream>
using namespace std;
int JmlMhs;
int nilaiTertinggi, nilaiTerendah, jmlLulus, jmlGagal;
float nilaiRataRata, jumlahNilai;

void Dinyatakan(int Nilai){
	if(Nilai >= 60){
		cout << "Lulus" << endl;
		jmlLulus += 1;
	}else {
		cout << "Gagal" << endl;
		jmlGagal += 1;
	}
}
int main(){
	cout << "=====PROGRAM SEDERHANA MEMPROSES NILAI MAHASISWA MENGGUNAKAN ARRAY=====" << endl;
	cout << "Inputkan Jumlah Mahasiswa : ";
	cin >> JmlMhs;
	int NilaiMhs[JmlMhs];
	for (int i = 0; i < JmlMhs; i++){
		cout << "Inputkan Nilai Mahasiswa index ke-" << i << " : ";
		cin >> NilaiMhs[i];
	}
	cout << endl;
	for (int i = 0; i < JmlMhs; i++){
		cout << "Mahasiswa index ke-" << i << " -- " << NilaiMhs[i] << " -- " ;	Dinyatakan(NilaiMhs[i]);
	}
	cout << endl;
	nilaiTertinggi = NilaiMhs[0];
	nilaiTerendah = NilaiMhs[0];
	for (int i = 0; i < JmlMhs; i++){
		if (NilaiMhs[i] > nilaiTertinggi){
			nilaiTertinggi = NilaiMhs[i];
		}
		if (NilaiMhs[i] < nilaiTerendah){
			nilaiTerendah = NilaiMhs[i];
		}
		jumlahNilai += NilaiMhs[i];
	}
	nilaiRataRata = jumlahNilai/JmlMhs;
	cout << endl;
	cout << "Nilai Tertinggi             = " << nilaiTertinggi << endl;
	cout << "Nilai Terendah              = " << nilaiTerendah << endl;
	cout << "Nilai Rata                  = " << nilaiRataRata << endl;
	cout << "Jumlah Mahasiswa yang Lulus = " << jmlLulus << endl;
	cout << "Jumlah Mahasiswa yang Gagal = " << jmlGagal << endl;
}
