#include <iostream>
#include <math.h>
#include <iomanip>
using namespace std;

float BMI, BB, TB, tb;
string Siapa;

int main(){
	cout << "-----KALKULATOR BODY MASS INDEX SEDERHANA-----" << endl << endl;
	
	cout << "Input tinggi badan dalam satuan CM : "; 
	cin >> tb;
	cout << "Input berat badan dalam satuan KG : "; 
	cin >> BB;
	TB = tb/100;
	BMI = BB/pow(TB,2);
	
	cout << "Body Mass Index = " << setprecision(4)<< BMI ;
	
	if (BMI < 18.5){
		cout <<" Underweight" << endl;
	} else if (BMI >= 18.5 && BMI <= 24.9){
		cout <<" Normal" << endl;
	} else if (BMI >= 25 && BMI <= 29.5){
		cout <<" Overweight " << endl;
	} else if (BMI >= 30 && BMI <= 34.9){
		cout <<" Obese " << endl;
	} else {
		cout <<" Extremely Obese " << endl;
	}
	
	getchar();
	cin.get();
	return 0;
}
