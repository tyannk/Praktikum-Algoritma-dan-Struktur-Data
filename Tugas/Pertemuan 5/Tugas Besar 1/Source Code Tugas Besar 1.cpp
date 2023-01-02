#include <iostream>
#include <conio.h>

using namespace std;

string KodePilihan,KodeBarang;
int JmlhBarang,JmlhHari,HrgBarang,TtlHrgSewa,Diskon;
float PersenDiskon;

int main(){
	cout << "-----------------LIST BARANG UNTUK DISEWA-----------------" << endl;
	cout << "----------------------------------------------------------" << endl;
	cout << "| Kode Barang | Nama Barang        | Harga Sewa Per Hari |" << endl;
	cout << "----------------------------------------------------------" << endl;
	cout << "| 1a          | Tenda kap 4        | Rp.400.000          |" << endl;
	cout << "----------------------------------------------------------" << endl;
	cout << "| 1b          | Tenda kap 2        | Rp.300.000          |" << endl;
	cout << "----------------------------------------------------------" << endl;
	cout << "| 1c          | Tas Carier 80L     | Rp.300.000          |" << endl;
	cout << "----------------------------------------------------------" << endl;
	cout << "| 1d          | Tas Daypack 35-50L | Rp.250.000          |" << endl;
	cout << "----------------------------------------------------------" << endl;
	cout << "| 1e          | Kompor             | Rp.200.000          |" << endl;
	cout << "----------------------------------------------------------" << endl;
	cout << "| 1f          | Nasting            | Rp.150.000          |" << endl;
	cout << "----------------------------------------------------------" << endl;
	cout << "| 1g          | Matras             | Rp.100.000          |" << endl;
	cout << "----------------------------------------------------------" << endl;
	cout << "| 1h          | Sleeping Bag       | Rp.150.000          |" << endl;
	cout << "----------------------------------------------------------" << endl;
	cout << "| 1i          | Headlamp           | Rp.50.000           |" << endl;
	cout << "----------------------------------------------------------" << endl;
	cout << "| 1j          | Gaiter             | Rp.50.000           |" << endl;
	cout << "----------------------------------------------------------" << endl;
	cout << "| 1k          | Sepatu             | Rp.250.000          |" << endl;
	cout << "----------------------------------------------------------" << endl;

	cout << "Apakah status anda sebagai Mahasiswa/Pelajar/Umum?" << endl;
	cout << "Input status: "; cin >> KodePilihan;
	cout << "Inputkan Kode Barang : "; cin >> KodeBarang;
	
	if (KodeBarang == "1a"){
		cout << "Nama barang: Tenda kap 4" << endl;
		cout << "Harga barang: Rp.400.000" << endl; 
		HrgBarang = 400000;
	}else if(KodeBarang == "1b"){
		cout << "Nama barang: Tenda kap 2" << endl;
		cout << "Harga barang: Rp.300.000" << endl; 
		HrgBarang = 300000;
	}else if(KodeBarang == "1c"){
		cout << "Nama barang: Tas carier 80L" << endl;
		cout << "Harga barang: Rp.300.000" << endl; 
		HrgBarang = 300000;
	}else if(KodeBarang == "1d"){
		cout << "Nama barang: Tas Daypack 35-50L" << endl;
		cout << "Harga barang: Rp.250.000" << endl; 
		HrgBarang = 250000;
	}else if(KodeBarang == "1e"){
		cout << "Nama barang: Kompor" << endl;
		cout << "Harga barang: Rp.200.000" << endl; 
		HrgBarang = 200000;
	}else if(KodeBarang == "1f"){
		cout << "Nama barang: Nasting" << endl;
		cout << "Harga barang: Rp.150.000" << endl; 
		HrgBarang = 150000;
	}else if(KodeBarang == "1g"){
		cout << "Nama barang: Matras" << endl;
		cout << "Harga barang: Rp.100.000" << endl; 
		HrgBarang = 100000;
	}else if(KodeBarang == "1h"){
		cout << "Nama barang: Sleeping Bag" << endl;
		cout << "Harga barang: Rp.150.000" << endl; 
		HrgBarang = 150000;
	}else if(KodeBarang == "1i"){
		cout << "Nama barang: Headlamp" << endl;
		cout << "Harga barang: Rp.50.000" << endl; 
		HrgBarang = 50000;
	}else if(KodeBarang == "1j"){
		cout << "Nama barang: Gaiter" << endl;
		cout << "Harga barang: Rp.50.000" << endl; 
		HrgBarang = 50000;
	}else if(KodeBarang == "1k"){
		cout << "Nama barang: Sepatu" << endl;
		cout << "Harga barang: Rp.250.000" << endl; 
		HrgBarang = 250000;
	}else{
		cout << "Kode Barang yang anda input salah!" << endl;
		goto end;
	}


	cout << "Inputkan Jumlah barang yang disewa: "; cin >> JmlhBarang; 
	cout << "Inputkan Jumlah hari: "; cin >> JmlhHari;

	TtlHrgSewa = HrgBarang*JmlhBarang*JmlhHari; 
	if (KodePilihan == "Mahasiswa"){
		cout << "Total Harga Sewa = " << TtlHrgSewa << endl;
		if (TtlHrgSewa >= 900000){
			if (TtlHrgSewa <= 1399000){
			cout << "Anda mendapatkan diskon sebesar 5%" << endl;
			PersenDiskon = 0.05;
			} else if (TtlHrgSewa >= 1400000){
				if (TtlHrgSewa <= 2199000){
					cout << "Anda mendapatkan diskon sebesar 10%" << endl;
					PersenDiskon = 0.1;
				}else if (TtlHrgSewa >= 2200000){
					if (TtlHrgSewa <= 3399000){
						cout << "Anda mendapatkan diskon sebesar 15%" << endl;
						PersenDiskon = 0.15;
					}else if (TtlHrgSewa >= 3400000){
						cout << "Anda mendapatkan diskon sebesar 20%" << endl;
						PersenDiskon = 0.2;
					}
				}
			}
		}else {
			cout << "Anda tidak mendapatkan diskon karena tidak memenuhi nominal minimal untuk mendapat diskon" << endl;
		}
		 
	}else if (KodePilihan == "Pelajar"){
		cout << "Total Harga Sewa = " << TtlHrgSewa << endl;
		if (TtlHrgSewa >= 900000){
			if (TtlHrgSewa <= 1399000){
			cout << "Anda mendapatkan diskon sebesar 5%" << endl;
			PersenDiskon = 0.05;
			} else if (TtlHrgSewa >= 1400000){
				if (TtlHrgSewa <= 2199000){
					cout << "Anda mendapatkan diskon sebesar 10%" << endl;
					PersenDiskon = 0.1;
				}else if (TtlHrgSewa >= 2200000){
					if (TtlHrgSewa <= 3399000){
						cout << "Anda mendapatkan diskon sebesar 15%" << endl;
						PersenDiskon = 0.15;
					}else if (TtlHrgSewa >= 3400000){
						cout << "Anda mendapatkan diskon sebesar 20%" << endl;
						PersenDiskon = 0.2;
					}
				}
			}
		}else {
			cout << "Anda tidak mendapatkan diskon karena tidak memenuhi nominal minimal untuk mendapat diskon" << endl;
		}
	}else if (KodePilihan == "Umum"){
		cout << "Total Harga Sewa = " << TtlHrgSewa << endl;
		if (TtlHrgSewa >= 100000){
			if (TtlHrgSewa <= 1499000){
			cout << "Anda mendapatkan diskon sebesar 5%" << endl;
			PersenDiskon = 0.05;
			} else if (TtlHrgSewa >= 1500000){
				if (TtlHrgSewa <= 2299000){
					cout << "Anda mendapatkan diskon sebesar 10%" << endl;
					PersenDiskon = 0.1;
				}else if (TtlHrgSewa >= 2300000){
					if (TtlHrgSewa <= 3499000){
						cout << "Anda mendapatkan diskon sebesar 15%" << endl;
						PersenDiskon = 0.15;
					}else if (TtlHrgSewa >= 3500000){
						cout << "Anda mendapatkan diskon sebesar 20%" << endl;
						PersenDiskon = 0.2;
					}
				}
			}
		}else {
			cout << "Anda tidak mendapatkan diskon karena tidak memenuhi nominal minimal untuk mendapat diskon" << endl;
		}
	}
	Diskon = TtlHrgSewa * PersenDiskon;
	cout << "Total Sewa adalah : " << TtlHrgSewa-Diskon << endl;

	end:
	getchar();
	cin.get();
	return 0;
}
