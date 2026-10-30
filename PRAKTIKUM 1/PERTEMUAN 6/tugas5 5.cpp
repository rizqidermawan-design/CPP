
#include <iostream>
using namespace std;

int main() {
    int r = 5;
    int faktorial = 1;

    cout << "Masukkan angka: ";
    cin >> r;

    for (int i = 1; i <= r; i++) {
        faktorial = faktorial * i;
    }

    cout << "Faktorial = " << faktorial << endl;

    return 0;
}
