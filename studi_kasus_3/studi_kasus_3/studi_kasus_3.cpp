#include <iostream>
#include <string>
using namespace std;
int main()
{
	int A, B, C, pilihan;
	cout << "MENU PILIHAN Aritmatika" << endl;
	cout << "===================" << endl;
	cout << "1. Penjumlahan" << endl;
	cout << "2. Pengurangan" << endl;
	cout << "3. Perkalian" << endl;
	cout << "Masukan Pilihan Aritmatika" << endl;
	cin >> pilihan;

	switch (pilihan)
	{
	case 1:
		cout << "Masukkan Nilai A:" << endl;
		cin >> A;
		cout << "Masukkan Nilai B:" << endl;
		cin >> B;
		C = A + B;
		cout << "Hasil Penjumlahan: " + to_string(C) << endl;
		break;
	case 2:
		cout << "Masukkan Nilai A:" << endl;
		cin >> A;
		cout << "Masukkan Nilai B:" << endl;
		cin >> B;
		C = A - B;
		cout << "Hasil Pengurangan: " + to_string(C) << endl;
		break;
	case 3:
		cout << "Masukkan Nilai A:" << endl;
		cin >> A;
		cout << "Masukkan Nilai B:" << endl;
		cin >> B;
		C = A * B;
		cout << "Hasil Perkalian: " + to_string(C) << endl;
		break;
	default: 
		cout << "Pilihan Tidak Tersedia" << endl;

	}
	/*
	if (pilihan == 1)
	{
		cout << "Masukkan Nilai A:" << endl;
		cin >> A;
		cout << "Masukkan Nilai B:" << endl;
		cin >> B;
		C = A + B;
		cout << "Hasil Penjumlahan: " + to_string(C) << endl;
	}
	else if (pilihan == 2) {
		cout << "Masukkan Nilai A:" << endl;
		cin >> A;
		cout << "Masukkan Nilai B:" << endl;
		cin >> B;
		C = A - B;
		cout << "Hasil Pengurangan: " + to_string(C) << endl;
	}
	else if (pilihan == 3)
	{
		cout << "Masukkan Nilai A:" << endl;
		cin >> A;
		cout << "Masukkan Nilai B:" << endl;
		cin >> B;
		C = A * B;
		cout << "Hasil Perkalian: " + to_string(C) << endl;
	}
	else {
		cout << "Pilihan Tidak Tersedia" << endl;
	}*/
}

