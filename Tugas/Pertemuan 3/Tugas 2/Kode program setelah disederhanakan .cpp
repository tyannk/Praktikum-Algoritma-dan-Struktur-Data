#include <iostream>
using namespace std;

int MKA,MKB,MKC;
int main (){
	cout << "Input Nilai Mata Kuliah A : "; cin >> MKA;
	cout << "Input Nilai Mata Kuliah B : "; cin >> MKB;
	cout << "Input Nilai Mata Kuliah C : "; cin >> MKC;
	
	if (MKA >= 60 && MKB >=60 && MKC >= 60){
		cout << "Anda Lulus" << endl;
	}else if (MKA >= 60 && MKB >= 60){
		cout << "Anda Lulus" << endl;
	}else if (MKA >= 60 && MKC >= 60){
		cout << "Anda Lulus" << endl;
	}else if (MKB >= 60 && MKC >= 60){
		cout << "Anda Lulus" << endl;
	}else {
		cout << "Anda Gagal" << endl;
	}
	getchar();
	cin.get();
	return 0;
}
