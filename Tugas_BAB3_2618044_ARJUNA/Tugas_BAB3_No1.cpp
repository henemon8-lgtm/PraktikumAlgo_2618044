#include <iostream>
using namespace std;

int main() {
    int nilai1 = 44;   // dua digit NIM kalian
    int nilai2 = 41;   // dua digit NIM pengajar

    cout << "Masukkan nilai pertama: " << nilai1 << endl;
    cout << "Masukkan nilai kedua  : " << nilai2 << endl;

    // Bitwise AND pada hasil perbandingan (true=1, false=0)
    if ((nilai1 > 60) & (nilai2 > 60))
        cout << "Selamat, Anda LULUS!" << endl;
    else
        cout << "Maaf, Anda TIDAK LULUS!" << endl;

    return 0;
}
