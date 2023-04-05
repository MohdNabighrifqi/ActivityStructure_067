#include <iostream>
using namespace std;

struct mahasiswa
{
	string NIM;
	string nama;
	string alamat;
	int umur;
};

int main() {
	mahasiswa mhs1, mhs2;

	mhs1.NIM = "20220140067";
	mhs1.umur = 19;
	mhs1.nama = "Mohd Nabigh Rifqi";
	mhs1.alamat = "TanjungPinang";

	cout << "masukan NIM :";
	cin >> mhs2.NIM;
	cout << "masukan umur :";
	cin >> mhs2.umur;
	cout << "masukan nama :";
	cin >> mhs2.nama;
	cout << "masukan alamat :";
	cin >> mhs2.alamat;

	cout << "\nNIM = " << mhs1.NIM;
	cout << "\nUmur = " << mhs1.umur;
	cout << "\nNama = " << mhs1.nama;
	cout << "\nAlamat = " << mhs1.alamat;


	cout << "\nNIM = " << mhs2.NIM;
	cout << "\nUmur = " << mhs2.umur;
	cout << "\nNama = " << mhs2.nama;
	cout << "\nAlamat = " << mhs2.alamat;
}