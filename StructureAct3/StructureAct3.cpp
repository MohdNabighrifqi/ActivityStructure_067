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
		cout << "masukan umur :";
		cin >> mhs[i].umur;
		cin.ignore(1, '\n');
		cout << "masukan Nama :";
		cin.getline(mhs[i].nama, 25);
		cout << "masukan Alamat :";
		cout << "\n\tMasukan desa :";
		cin.getline(mhs[i].alamat.desa, 20);
		cout << "\n\tMasukan kota :";
		cin.getline(mhs[i].alamat.kota, 20);
	}
	
	for (int i = 0; i < 3; i++)
	{
		cout << "\n\nNIM : " << mhs[i].NIM;
		cout << "\nUmur : " << mhs[i].umur;
		cout << "\nNama : " << mhs[i].nama;
		cout << "\nAlamat : ";
		cout << "\nDesa : " << mhs[i].alamat.desa;
		cout << "\n\nKota : " << mhs[i].alamat.kota;
	}
}