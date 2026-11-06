#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double r, t;

    cout << "=== Program Menghitung Volume Tabung ===" << endl;
    cout << "Masukkan jari-jari tabung : ";
    cin >> r;                       // ketik 44 (NIM kalian)
    cout << "Masukkan tinggi tabung    : ";
    cin >> t;                       // ketik 41 (NIM pengajar)

    double volume = M_PI * r * r * t;

    cout << "Volume Tabung adalah: " << volume << endl;

    return 0;
}
