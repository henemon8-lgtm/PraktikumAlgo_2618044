#include <iostream>
#include <string>
using namespace std;

int main() {
    string nama, namaMenu;
    int pilihan, jumlah;
    int harga = 0;

    cout << "=== Program Pemesanan Menu Kantin ===" << endl;
    cout << "Masukkan Nama Pemesan: ";
    getline(cin, nama);

    cout << endl;
    cout << "=== MENU KANTIN ===" << endl;
    cout << "1. Nasi Goreng - Rp15000" << endl;
    cout << "2. Mie Goreng  - Rp12000" << endl;
    cout << "3. Bakso       - Rp10000" << endl;
    cout << "4. Es Teh      - Rp5000" << endl;
    cout << "Pilih menu: ";
    cin >> pilihan;

    switch (pilihan) {
        case 1: namaMenu = "Nasi Goreng"; harga = 15000; break;
        case 2: namaMenu = "Mie Goreng";  harga = 12000; break;
        case 3: namaMenu = "Bakso";       harga = 10000; break;
        case 4: namaMenu = "Es Teh";      harga = 5000;  break;
        default:
            cout << "Menu tidak valid" << endl;
            return 0;
    }

    cout << "Masukkan jumlah pesanan: ";
    cin >> jumlah;

    int total = harga * jumlah;
    int diskon = 0;
    if (total > 40000) {
        diskon = total * 8 / 100;
    }
    int totalBayar = total - diskon;

    cout << endl;
    cout << "===== STRUK PEMBAYARAN =====" << endl;
    cout << "Nama Pemesan    : " << nama << endl;
    cout << "Nama Menu       : " << namaMenu << endl;
    cout << "Harga Satuan    : Rp" << harga << endl;
    cout << "Jumlah Pesanan  : " << jumlah << endl;
    cout << "Total Pesanan   : Rp" << total << endl;
    cout << "Diskon 8%       : Rp" << diskon << endl;
    cout << "Total Pembayaran: Rp" << totalBayar << endl;
    cout << "Terima kasih telah memesan!" << endl;

    return 0;
}
