#include <iostream>
using namespace std;
int JmlhMhs,NilaiTB1,NilaiTB2,NilaiUAS;
float TtlNilai;
int main(){
	cout << "Inputkan jumlah mahasiswa yang akan diproses: ";
	cin >> JmlhMhs;
	for(int i=1; i<=JmlhMhs; i++){
		cout << "Mahasiswa ke-" << i << endl;
		cout << "Inputkan nilai TB 1: ";
		cin >> NilaiTB1;
		cout << "Inputkan nilai TB 2: ";
		cin >> NilaiTB2;
		cout << "Inputkan nilai UAS: ";
		cin >> NilaiUAS;
		TtlNilai = (NilaiTB1 * 0.30) + (NilaiTB2 * 0.30) + (NilaiUAS * 0.40);
		cout << "Total Nilai= " << TtlNilai << endl << endl;
	}
	
	return 0;
}
