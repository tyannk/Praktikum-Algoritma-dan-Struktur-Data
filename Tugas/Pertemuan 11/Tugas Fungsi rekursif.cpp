#include <iostream>

using namespace std;
int nilaiMaks,hasil;
int sum(int maks);

int main(){
	cout << "=====PROGRAM SEDERHANA UNTUK MENJUMLAHKAN BILANGAN GANJIL=====" << endl;
	cout << "Inputkan nilai maksimal : ";
	cin >> nilaiMaks;
	cout << "Hasil : ";
	hasil = sum(nilaiMaks);
	cout << hasil;
	return 0;
}

int sum(int maks){
	if(maks == 0){
		return maks;
	}
	else if( maks > 1 ){
		while( maks % 2==0 ){
			maks--;
		}
		if ( maks != 1 ){
			cout << maks << " + ";	
		}
		else {
			cout << maks << " = ";
		}
		return maks + sum(maks-1);
	}
}
