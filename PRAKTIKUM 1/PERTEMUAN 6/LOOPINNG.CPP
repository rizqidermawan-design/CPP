#include <iostream>
using namespace std;

int main() {

    int pilihan;

    do {

        cout << "\n===== MENU =====" << endl;
        cout << "1. Data Mahasiswa" << endl;
        cout << "2. Nilai Mahasiswa" << endl;
        cout << "3. Keluar" << endl;
        cout << "Pilih: ";
        cin >> pilihan;

        switch (pilihan) {

            case 1:
                cout << "Data Mahasiswa";
                break;

            case 2:
                cout << "Nilai Mahasiswa";
                break;

            case 3:
                cout << "Program selesai";
                break;

            default:
                cout << "Pilihan tidak tersedia";
        }

    } while (pilihan != 3);

    return 0;
}