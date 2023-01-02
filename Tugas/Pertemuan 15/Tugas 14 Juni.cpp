#include <iostream> 

using namespace std;
int Jmlh;
double Luas;
double luasPersegiPanjang(double Panjang, double Lebar){
	return Luas = Panjang * Lebar;
}

int main(){
	cout << "=====MENGHITUNG LUAS PERSEGI PANJANG=====" << endl;
	cout << "Berapa jumlah persegi panjang yang ingin dihitung luasnya? : "; 
	cin >> Jmlh;
	double arraysPanjang[Jmlh];
	double arraysLebar[Jmlh];
	double arraysLuas[Jmlh];
	for(int i=0; i<Jmlh; i++){
		cout << "Input Panjang untuk Persegi Panjang ke-" << i+1 << " : "; cin >> arraysPanjang[i];
		cout << "Input Lebar untuk Persegi Panjang ke-" << i+1 << "   : "; cin >> arraysLebar[i];
		cout << endl;
		luasPersegiPanjang(arraysPanjang[i], arraysLebar[i]);
		arraysLuas[i] = Luas;
	}
		for(int i=0; i<Jmlh; i++){
		cout << "Panjang untuk Persegi Panjang ke-" << i+1 << " adalah " << arraysPanjang[i] << endl;
		cout << "Lebar untuk Persegi Panjang ke-" << i+1 << "   adalah " << arraysLebar[i] << endl;
		cout << "Luas dari Persegi Panjang ke-" << i+1 << "     adalah " << arraysLuas[i] << endl << endl;
	}
}
