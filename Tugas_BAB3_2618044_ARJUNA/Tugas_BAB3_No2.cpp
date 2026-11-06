#include <iostream>
using namespace std;

int main() {
    double c;

    cout << "      PROGRAM KONVERSI SUHU" << endl << endl;
    cout << "Masukan Suhu(Celcius) = ";
    cin >> c;                       // ketik 44

    double f = (c * 9.0 / 5.0) + 32;
    double r = c * 4.0 / 5.0;
    double k = c + 273.15;

    cout << "Jadi," << endl;
    cout << c << " derajat celcius    = " << f << " derajat fahrenheit" << endl;
    cout << f << " derajat fahrenheit = " << r << " derajat reamur" << endl;
    cout << r << " derajat reamur     = " << k << " derajat kelvin" << endl;

    return 0;
}
