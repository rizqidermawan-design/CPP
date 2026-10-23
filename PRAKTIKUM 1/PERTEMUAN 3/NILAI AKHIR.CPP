#include <iostream>
using namespace std;

int main() {
    double tugas, uts, uas, nilaiAkhir;

    cout << "Nilai Tugas : ";
    cin >> tugas;

    cout << "Nilai UTS   : ";
    cin >> uts;

    cout << "Nilai UAS   : ";
    cin >> uas;

    nilaiAkhir = (tugas + 0.30) +
                 (uts + 0.30) +
                 (uas * 0.40);

    cout << "Nilai Akhir : " << nilaiAkhir << endl;

    return 0;
}