#include <iostream>
using namespace std;
int JmlhMhs,NilaiTB1,NilaiTB2,NilaiUAS;
int TtlMhsLulus=0, TtlMhsGagal=0;
float TtlNilai,NilaiRataRata,TtlNilaiSemuaMhs,NilaiRataRataAllMhs;
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


		if (TtlNilai >= 60){
			cout << "Mahasiswa ke-" << i << " dinyatakan LULUS" << endl;
			TtlMhsLulus++;
		}else {
			cout << "Mahasiswa ke-" << i << " dinyatakan TIDAK LULUS/GAGAL" << endl;
			TtlMhsGagal++;
		}
		if (NilaiTB1 > NilaiTB2 && NilaiTB1 > NilaiUAS){
			cout << "Nilai tertinggi adalah TB 1 dengan nilai: " << NilaiTB1 << endl;
		}else if (NilaiTB2 > NilaiTB1 && NilaiTB2 > NilaiUAS){
			cout << "Nilai tertinggi adalah TB 2 dengan nilai: " << NilaiTB2 << endl;
		}else {
			cout << "Nilai tertinggi adalah UAS dengan nilai: " << NilaiUAS << endl;
		}
		if (NilaiTB1 < NilaiTB2 && NilaiTB1 < NilaiUAS){
			cout << "Nilai terkecil adalah TB 1 dengan nilai: " << NilaiTB1 << endl;
		}else if (NilaiTB2 < NilaiTB1 && NilaiTB2 < NilaiUAS){
			cout << "Nilai terkecil adalah TB 2 dengan nilai: " << NilaiTB2 << endl;
		}else {
			cout << "Nilai terkecil adalah UAS dengan nilai: " << NilaiUAS << endl;
		}
		NilaiRataRata = (NilaiTB1 + NilaiTB2 + NilaiUAS) / 3;
		cout << "Nilai Rata-rata mahasiswa ke-" << i << " adalah " << NilaiRataRata << endl << endl;
		TtlNilaiSemuaMhs += NilaiRataRata;
		NilaiRataRataAllMhs = TtlNilaiSemuaMhs / i;
	}
	
	cout << "Total Mahasiswa Lulus = " << TtlMhsLulus << endl;
	cout << "Total Mahasiswa Tidak Lulus/Gagal = " << TtlMhsGagal << endl;
	cout << "Nilai rata-rata seluruh mahasiswa = " << NilaiRataRataAllMhs << endl; 

	return 0;
}
