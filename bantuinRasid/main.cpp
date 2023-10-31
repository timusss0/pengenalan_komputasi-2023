#include <iostream>
using namespace std;

int main() {


        int hargaBarang, potongan = 10000, hargaTotal;

        cout << "Masukan harga barang: ";
        cin >> hargaBarang;

        if (hargaBarang >= 250000) {
            hargaTotal = hargaBarang - potongan;
            cout << "Mendapat potongan 10.000?" << endl;
            cout << "Harga total = " << hargaTotal;
        } else {
            cout << "Tidak mendapat potongan" << endl;
        }

        return 0;
    }

