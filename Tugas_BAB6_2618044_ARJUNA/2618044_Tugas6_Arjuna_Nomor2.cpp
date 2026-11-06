#include <iostream>
using namespace std;
 
int main() {
    int n, i = 2, total = 1;
 	
 	cout << "##     Arjuna Nur - 2618044     ##" << endl;
    cout << "=====================================" << endl;
    cout << "## Program C++ Penjumlahan Deret ##" << endl;
    cout << "=====================================" << endl;
    cout << endl;
 
    cout << "Jumlah deret yang diinginkan: ";
    cin >> n;
    cout << endl;
 
    cout << "1";
    while (i <= n) {
        total = total + i;
        cout << " + " << i;
        i++;
    }
    cout << " = " << total << endl;
 
    return 0;
}

