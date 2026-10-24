#include <iostream>
#include <string>
using namespace std;

int main() {

    string nama,status;
    double tugas,uts,uas,nilaiAkhir,kehadiran;
    char grade;

    cout << "Nama           : ";
    getline(cin, nama);

    cout << "nilai tugas    : ";
    cin >> tugas;

    cout << "nilai uts      : ";
    cin >> uts;
    
    cout << "nilai uas      : ";
    cin >> uas;

    cout << "Kehadiran %    : ";
    cin >> kehadiran;
   
    nilaiAkhir = (tugas * 0.30) +
                 (uts * 0.30) +
                 (uas * 0.40);
    
    
if (nilaiAkhir >= 85) {
    grade = 'A';
} else if (nilaiAkhir >= 75) {
    grade = 'B';
} else if (nilaiAkhir >= 65) {
    grade = 'C';
} else if (nilaiAkhir >= 50) {
    grade = 'D';
} else {
    grade = 'E';
}

    if (nilaiAkhir >= 60 && kehadiran >= 75) {
        status = "Mahasiswa Lulus";
    } else {
        status = "Mahasiswa Tidak Lulus";
    }


    cout << "\n==========================" << endl;
    cout << "   NILAI UJIAN MAHASISWA" << endl;
    cout << "==========================" << endl;
    cout << "Nama          : " << nama << endl;
    cout << "nilai  tugas  : " << tugas << endl;
    cout << "nilai uts     : " << uts << endl;
    cout << "nilai uas     : " << uas << endl;
    cout << "nilai akhir   : " << nilaiAkhir << endl;
    cout << "grade         : " << grade << endl;
    cout << "kehadiran     : " << kehadiran << "%" << endl;
    cout << "status        : " << status << endl;
    cout << "============================" << endl;
    
    
    return 0;
}