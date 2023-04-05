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
	cout << "masukan nama :";
	cin >> mhs2.nama;
	cout << "masukan alamat :";
	cin >> mhs2.alamat;
	cout << "masukan umur :";
	cin >> mhs2.umur;

	
}