#include <iostream>
using namespace std;

int MKA,MKB,MKC;
int main (){
	cout << "Input Nilai Mata Kuliah A : "; cin >> MKA;
	cout << "Input Nilai Mata Kuliah B : "; cin >> MKB;
	cout << "Input Nilai Mata Kuliah C : "; cin >> MKC;
	
	if(MKA >= 60){
		if(MKB >= 60){
			if(MKC >= 60){
				cout << "Anda Lulus" << endl;
			}else {
				cout << "Anda Lulus" << endl;
			}
		}else if(MKC >= 60){
			cout << "Anda Lulus" << endl;
		}else {
			cout << "Anda Gagal" << endl;
		}
	}else if(MKB >= 60){
		if (MKC >= 60){
			cout << "Anda Lulus" << endl;
		} else {
			cout << "Anda Gagal" << endl;
		}
	}else if(MKC >= 60){
		cout << "Anda Gagal" << endl;
	}else {
		cout << "Anda Gagal" << endl;
	}
	
	getchar();
	cin.get();
	return 0;
}
