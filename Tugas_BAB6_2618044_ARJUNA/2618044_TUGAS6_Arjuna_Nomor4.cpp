#include <iostream>
using namespace std;
 
int main() {
    int n;
 
    cout << "=====================================" << endl;
    cout << "======== Arjuna Nur - 2618044 =======" << endl;
    cout << "========= DERET CAMPUR LOGIKA =======" << endl;
    cout << "=====================================" << endl;
    cout << endl;
 
    cout << "Masukkan jumlah angka: ";
    cin >> n;
    cout << endl;
 
    cout << "=== Deret Campur Logika ===" << endl;
    for (int i = 1; i <= n; i++) {
        if (i % 2 == 0) {
            cout << i * 2;          // genap  -> dikali 2
        } else if (i % 3 == 0) {
            cout << i + 3;          // kelipatan 3 -> ditambah 3
        } else {
            cout << i;              // lainnya -> apa adanya
        }
        if (i < n) {
            cout << " ";
        }
    }
    cout << endl;
 
    return 0;
}

