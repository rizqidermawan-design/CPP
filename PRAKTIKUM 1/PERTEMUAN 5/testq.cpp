#include <iostream>
#include <string>

using namespace std;

int main() {
    string nama;
    double nilaiTugas, nilaiUTS, nilaiUAS, nilaiAkhir, kehadiran;

    cout << "Masukkan Nama Mahasiswa : ";
    getline(cin, nama);
    cout << "Masukkan Nilai Tugas    : ";
    cin >> nilaiTugas;
    cout << "Masukkan Nilai UTS      : ";
    cin >> nilaiUTS;
    cout << "Masukkan Nilai UAS      : ";
    cin >> nilaiUAS;
    cout << "Kehadiran % : ";
    cin >> kehadiran;

    nilaiAkhir = (0.30 * nilaiTugas) + (0.30 * nilaiUTS) + (0.40 * nilaiUAS);

    cout << "\n=================================" << endl;
    cout << "KALKULATOR NILAI MAHASISWA" << endl;
    cout << "=================================" << endl;
    cout << "Nama        : " << nama << endl;
    cout << "Nilai Tugas : " << nilaiTugas << endl;
    cout << "Nilai UTS   : " << nilaiUTS << endl;
    cout << "Nilai UAS   : " << nilaiUAS << endl;
    cout << "Nilai Akhir : " << nilaiAkhir << endl;

    if (nilaiAkhir >= 85) {
        cout << "Grade A";
    } else if (nilaiAkhir >= 75) {
        cout << "Grade B";
    } else if (nilaiAkhir >= 65) {
        cout << "Grade C";
    } else if (nilaiAkhir >= 50) {
        cout << "Grade D";
    } else {
        cout << "Grade E";
    } 
    
    cout << "\nKehadiran   : " << kehadiran << "%" << endl;

    if (nilaiAkhir >= 60 && kehadiran >= 75) {
        cout << "Mahasiswa Lulus";
    } else {
        cout << "Mahasiswa Tidak Lulus";
    }

    cout << "\n=================================" << endl;

    return 0;
}