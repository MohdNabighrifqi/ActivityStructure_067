#include <iostream>
using namespace std;

struct DetailAlamat
{
	char desa[20];
	char kota[20];
};

struct Mahasiswa
{
	char NIM[12];
	char nama[20];
	DetailAlamat alamat;
	int umur;
};

int main() {
	Mahasiswa mhs;

	cout << "masukan NIM :";
	cin.getline(mhs.NIM, 12);
	cout << "masukan umur :";
	cin >> mhs.umur;
	cin.ignore(1, '\n');
	cout << "masukan nama :";
	cin.getline(mhs.nama,20);
	cout << "alamat :";
	cout << "\n\tMasukan desa :";
	cin.getline(mhs.alamat.desa,20);
	cout << "\tMasukan kota :";
	cin.getline(mhs.alamat.kota,20);


	cout << "\n\nNIM : " << mhs.NIM;
	cout << "\nUmur : " << mhs.umur;
	cout << "\nNama : " << mhs.nama;
	cout << "\nAlamat : ";
	cout << "\n\tDesa : " << mhs.alamat.desa;
	cout << "\n\tKota : " << mhs.alamat.kota;

}
