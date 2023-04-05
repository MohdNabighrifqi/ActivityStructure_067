#include <iostream>
using namespace std;

struct AlamatDetail
{
	string desa[20];
	string kota[20];
};

struct Mahasiswa
{
	string NIM[12];
	string nama[20];
	AlamatDetail alamat;
	int umur;
};