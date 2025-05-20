#include <iostream>
using namespace std;

class Barang {
private:
    string namaBarang;
    string kodeBarang;

public:
    // Constructor berparameter
    Barang(string nama, string kode) {
        namaBarang = nama;
        kodeBarang = kode;
    }

    void tampilkanData() {
        cout << "Nama Barang : " << namaBarang << endl;
        cout << "Kode Barang : " << kodeBarang << endl;
    }
};

int main() {
    // Membuat objek menggunakan constructor berparameter
    Barang barang1("le mineral", "1");
    Barang barang2("chocolate", "2");

    // Menampilkan data
    cout << "Data Barang 1:" << endl;
    barang1.tampilkanData();

    cout << "\nData Barang 2:" << endl;
    barang2.tampilkanData();

    return 0;
}