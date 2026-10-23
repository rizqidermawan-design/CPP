#include <iostream>
#include <string>
using namespace std;

int main() {

    string nama, nim, prodi;
    int semester;
    double tinggiBadan, beratbadan;

    cout << "Nama           : ";
    getline(cin, nama);

    cout << "NIM            : ";
    getline(cin, nim);

    cout << "Program Studi  : ";
    getline(cin, prodi);

    cout << "Semester       : ";
    cin >> semester;

    cout << "Tinggi Badan   : ";
    cin >> tinggiBadan;

    cout << "Berat badan    : ";
    cin >> beratbadan;



    cout << "\n==========================" << endl;
    cout << "===== DATA MAHASISWA =====" << endl;
    cout << "==========================" << endl;
    cout << "Nama          : " << nama << endl;
    cout << "NIM           : " << nim << endl;
    cout << "Program Studi : " << prodi << endl;
    cout << "Semester      : " << semester << endl;
    cout << "Tinggi Badan  : " << tinggiBadan << "cm" << endl;
    cout << "beratBadan    : " << beratbadan << "kg" << endl;

    return 0;
}