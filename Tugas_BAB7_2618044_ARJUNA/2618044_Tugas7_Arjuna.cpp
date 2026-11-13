#include <iostream>
using namespace std;

int main() {
    cout << "2618044 || Arjuna Nur" << endl;
    cout << "TUGAS BAB 7" << endl;
    cout << "=====================================" << endl;

    int n;
    cout << "1. Membuat Kotak Angka Diagonal" << endl;
    cout << "   Masukkan ukuran kotak: ";
    cin >> n;
    cout << endl;

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            if (i == j) {
                cout << "1 ";
            } else {
                cout << "0 ";
            }
        }
        cout << endl;
    }
    cout << endl;

    int m;
    cout << "2. Membuat Segitiga Terbalik Genap" << endl;
    cout << "   Masukkan ukuran segitiga: ";
    cin >> m;
    cout << endl;

    int i = m;
    while (i >= 1) {
        int j = 1;
        int angka = 2;
        while (j <= i) {
            cout << angka << " ";
            angka += 2;
            j++;
        }
        cout << endl;
        i--;
    }
    cout << endl;

    int k;
    cout << "3. Membuat Segitiga Siku-siku Huruf" << endl;
    cout << "   Masukkan ukuran segitiga siku-siku: ";
    cin >> k;
    cout << endl;

    int baris = 1;
    do {
        int kolom = 1;
        char huruf = 'A';
        do {
            cout << huruf << " ";
            huruf++;
            kolom++;
        } while (kolom <= baris);
        cout << endl;
        baris++;
    } while (baris <= k);

    return 0;
}