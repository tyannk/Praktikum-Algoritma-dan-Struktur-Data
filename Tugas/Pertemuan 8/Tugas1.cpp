#include <iostream>

using namespace std;

int main(){
	int baris,kolom;
	
	cout << "Inputkan jumlah baris : "; cin >> baris;
	cout << "Inputkan jumlah kolom : "; cin >> kolom;
	
	for(int i=0; i<baris; i++){
		for(int j=0; j<kolom; j++){
			cout << "* ";
		}
		cout << endl;
	}

	return 0;
}
