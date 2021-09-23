#include <iostream>
#include <conio.h>
#include <math.h>
using namespace std;

int main(){
	float nilai_praktikum, nilai_teori, nilai_tugas, nilai_final_project;
	cout<< " program menghitung rata-rata "<<endl;
	cout<<"\n";

	cout << " nilai praktikum : ";
	cin >> nilai_praktikum;
	cout << " nilai teori : ";
	cin >> nilai_teori;
	cout << " nilai tugas : ";
	cin >> nilai_tugas;
	cout << " nilai final project : ";
	cin >> nilai_final_project;

	cout <<" nilai rata-rata = " <<(nilai_praktikum*0.4)+(nilai_teori*0.4)+(nilai_tugas*0.1)+(nilai_final_project*0.1)/4.0<<endl;

	return 0;
}
