#include <iostream>
using namespace std;
 
int main() {
    int n;
    long long faktorial = 1;
 	cout << "##  Arjuna Nur - 2618044  ##" << endl;
    cout << "==================================" << endl;
    cout << "##  Program C++ Hitung Faktorial ##" << endl;
    cout << "==================================" << endl;
    cout << endl;
 
    cout << "Input angka: ";
    cin >> n;
 
    cout << n << "! = 1";
    for (int i = 2; i <= n; i++) {
        faktorial = faktorial * i;
        cout << " * " << i;
    }
    cout << " = " << faktorial << endl;
 
    return 0;
}

