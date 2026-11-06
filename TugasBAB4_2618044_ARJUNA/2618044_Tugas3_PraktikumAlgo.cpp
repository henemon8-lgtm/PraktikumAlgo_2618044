#include <iostream>
#include <string>
using namespace std;

int main() {
    string nama, nim;
    long long pendapatan, pajak, pengurangan;
    int tanggungan, tarif;

    cout << "===== PROGRAM PAJAK PENDAPATAN =====" << endl << endl;

    // a. Input Nama dan NIM
    cout << "Nama Anda : ";
    getline(cin, nama);
    cout << "NIM Anda : ";
    getline(cin, nim);

    cout << endl;
    cout << "                DATA PENDAPATAN" << endl << endl;

    cout << "Pendapatan bulanan: Rp. ";
    cin >> pendapatan;

    // c. Percabangan if dua kondisi: pendapatan negatif tidak valid
    if (pendapatan < 0) {
        cout << "Input tidak valid! Pendapatan tidak boleh negatif." << endl;
    } else {
        cout << "Memiliki tanggungan? (1=Ya, 0=Tidak): ";
        cin >> tanggungan;

        // b. Percabangan if tiga kondisi atau lebih (else if) + operator AND (&&)
        if (pendapatan < 5000000) {
            tarif = 0;
        } else if (pendapatan >= 5000000 && pendapatan < 10000000) {
            tarif = 5;
        } else if (pendapatan >= 10000000 && pendapatan < 20000000) {
            tarif = 10;
        } else {
            tarif = 15;
        }

        // Hitung pajak awal
        pajak = pendapatan * tarif / 100;

        // c. Operator ternary: pengurangan Rp100.000 jika punya tanggungan (1)
        pengurangan = (tanggungan == 1) ? 100000 : 0;
        pajak = pajak - pengurangan;

        // c. Pajak akhir tidak boleh kurang dari nol
        if (pajak < 0) {
            pajak = 0;
        }

        cout << "Tarif pajak: " << tarif << "%" << endl;
        cout << "Pajak akhir: Rp" << pajak << endl;
    }

    return 0;
}
