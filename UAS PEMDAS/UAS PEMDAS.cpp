#include <iostream>
#include <string>
using namespace std;

class MasukUniversitas {
protected:
	int uangPendaftaran;
	int uangSemesterPertama;
	int uangBangunan;
	int totalBiaya;
	// isi daftar variable yang dibutuhkan di bawah ini
public:
	MasukUniversitas() {
		uangPendaftaran = 0;
		uangSemesterPertama = 0;
		uangBangunan = 0;
		totalBiaya = 0;
		// isi nilai default variable yang dibutuhkan di bawah ini
	}
	virtual void namaJalurMasuk() = 0;
	
	virtual void hitungTotalBiaya() = 0; 

	virtual void tampilkanTotalBiaya() = 0;

	virtual void input() {
		cout << "Jalur Masuk" << endl;
		cout << "1. SNBT" << endl;
		cout << "2. SNBP" << endl;

		return;
	}

	// isi disini dengan fungsi virtual yang dibutuhkan

	void setUangPendaftaran(int nilai) {
		this->uangPendaftaran = nilai;
	}
	float getUangPendaftaran() {
		return uangPendaftaran;
	}

	class SNBT {
		int uangPendaftaran;
		int uangSemesterPertama;
		int uangBangunan;
		int TotalBiaya;
	};

	class SNBP {
		int uangPendaftaran;
		int uangSemesterPertama;
		int hitungTotalBiaya;
	};

	// isi setter dan getter variable yang dibutuhkan di bawah ini
};
class SNBT : public MasukUniversitas {
public:
	virtual void namaJalurMasuk() = 0;
	void namaJalurMasuk() {
		cout << "nama Jalur Masuk" << endl;
	}
	// isi disini untuk melengkapi class SNBT
};
class SNBP : public MasukUniversitas {
	virtual void namaJalurMasuk() = 0;
	void namaJalurMasuk() {
		cout << "Jalur Masuk" << endl;
	}
	// isi disini untuk melengkapi class SNBP
};
int main() {
	int pilihan;
	cout << "Jalur Masuk" << endl;
	cout << "1. SNBT" << endl;
	cout << "2. SNBP" << endl;
	cout << "3. Keluar" << endl;

	cin >> pilihan;
	switch (pilihan) {
	case 1: {
		int uangPendaftaran;
		cout << "Masukkan uang pendaftaran : 100000" << endl;
		cin >> uangPendaftaran;
		break;
	}
	case 2: {
		int uangSemesterPertama;
		cout << "Masukkan uang semester pertama : 30000000" << endl;
		cin >> uangSemesterPertama;
		break;
	}
	}
	// isi disini untuk fungsi main
}



