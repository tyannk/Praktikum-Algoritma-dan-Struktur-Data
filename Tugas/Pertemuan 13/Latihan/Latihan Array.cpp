#include <iostream>
#include <array>

using namespace std;

int JmlMhs;

void Dinyatakan(int Nilai){
	if(Nilai >= 60){
		cout << "Lulus" << endl;
	}else {
		cout << "Gagal" << endl;
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
	for (int i = 0; i < JmlMhs; i++){
		cout << "Mahasiswa index ke-" << i << " -- " << NilaiMhs[i] << " -- " ;	Dinyatakan(NilaiMhs[i]);
	}
}
