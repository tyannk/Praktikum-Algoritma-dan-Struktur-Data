#include <iostream>
using namespace std;
int main(){
	int input;
	cout <<"Inputkan angka untuk mendapakatan tabel perkalian dari angka tersebut" << endl;
	cout <<"input: "; cin >> input;
	for(int i=1; i<=input; i++){
		for(int j=1; j<=input; j++){
			cout << i*j;
			if(i*j < 10){
				cout << "  ";
			}else if (i*j >= 10){
				cout << " ";
			}
		}
		cout << endl;
	}
	return 0;
}
