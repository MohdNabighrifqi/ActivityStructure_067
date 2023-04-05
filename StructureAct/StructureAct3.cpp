#include <iostream>
using namespace std;

struct AlamatDetail
{
	char desa[20];
	char kota[20];
};

struct Mahasiswa
{
	char NIM[12];
	char nama[25];
	AlamatDetail alamat;
	int umur;
};

int main() {
	Mahasiswa mhs[3];

	for (int i = 0; i < 3; i++) {
		cout << "masukan NIM :";
		cin.getline(mhs[i].NIM, 12);
		cout << "masukan Nama :";