#include <iostream>
using namespace std;

int main() {

    int pilihan;

    do {

        cout << "\n===== MENU =====" << endl;
        cout << "1. Penjumlahan" << endl;
        cout << "2. Pengurangan" << endl;
        cout << "3. Perkalian" << endl;
        cout << "4. Pembagian" << endl;
        cout << "5. Keluar" << endl;
        cout << "Pilih: ";
        cin >> pilihan;

        switch (pilihan) {

            case 1:
                cout << "Penjumlahan";
                break;

            case 2:
                cout << "Pengurangan";
                break;

            case 3:
                cout << "Perkalian";
                break;
            
            case 4:
                cout << "Pembagian";
                break;

            case 5:
                cout << "Program selesai";
                break;
            default:
                cout << "Pilihan tidak tersedia";
        }

    } while (pilihan != 5);

    return 0;
}