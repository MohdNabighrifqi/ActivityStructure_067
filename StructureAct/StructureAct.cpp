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
	cout << "masukan alamat :";
	cin >> mhs2.alamat;
	cout << "masukan nama :";
	cin >> mhs2.nama;

	cout << "\nNIM = " << mhs1.NIM;
	cout << "\nNama = " << mhs1.nama;
	cout << "\nAlamat = " << mhs1.alamat;
	cout << "\nUmur = " << mhs1.umur;

	cout << "\n\nNIM = " << mhs2.NIM;
	cout << "\n\nNama = " << mhs2.nama;
	cout << "\n\nAlamat = " << mhs2.alamat;
	cout << "\n\nUmur = " << mhs2.umur;
}