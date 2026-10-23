#include <iostream>
using namespace std;

int main() {
    int ALAS, TINGGI, luas;

    cout << "Masukkan ALAS: ";
    cin >> ALAS;

    cout << "Masukkan TINGGI: ";
    cin >> TINGGI;

    luas = 0.5 * ALAS * TINGGI;

    cout << "Luas SEGITIGA = " << luas << endl;

    return 0;
}