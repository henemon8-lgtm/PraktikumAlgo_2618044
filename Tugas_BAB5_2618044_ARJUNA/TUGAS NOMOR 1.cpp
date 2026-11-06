#include <iostream>
#include <string>
using namespace std;

int main() {
    string nama, nim;
    double nilai;

    // Input data mahasiswa
    cout << "Nama : ";
    getline(cin, nama);
    cout << "NIM: ";
    getline(cin, nim);
    cout << "Masukkan nilai (0-100): ";
    cin >> nilai;

    // Validasi rentang nilai
    if (nilai < 0 || nilai > 100) {
        cout << "Nilai tidak valid" << endl;
        return 0;
    }

    // Ubah nilai menjadi satuan puluhan untuk switch case
    int kategori = (int)(nilai / 10);

    switch (kategori) {
        case 10:
        case 9:
            cout << "Grade A" << endl;
            break;
        case 8:
            cout << "Grade B" << endl;
            break;
        case 7:
            cout << "Grade C" << endl;
            break;
        case 6:
            cout << "Grade D" << endl;
            break;
        default:
            cout << "Grade E" << endl;
            break;
    }

    return 0;
}
