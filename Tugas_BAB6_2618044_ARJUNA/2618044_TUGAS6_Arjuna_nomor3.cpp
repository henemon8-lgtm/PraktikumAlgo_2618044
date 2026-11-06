#include <iostream>
using namespace std;
 
int main() {
    const int LEVEL_MAKS = 6;
    int level = 1;
    int jawaban, kunci;
 
    cout << "=====================================" << endl;
    cout << "=====  Arjuna Nur - 2618044   =====" << endl;
    cout << "===== PROGRAM GAME MATEMATIKA =====" << endl;
    cout << "=====================================" << endl;
    cout << endl;
 
    do {
        kunci = level + (level * 5);
 
        cout << "Level " << level << endl;
        cout << "Berapa hasil dari " << level << " + " << (level * 5) << " ? ";
        cin >> jawaban;
 
        if (jawaban == kunci) {
            cout << "Benar! Naik level!" << endl;
            cout << endl;
            level++;
        } else {
            cout << "Game Over" << endl;
            return 0;
        }
    } while (level <= LEVEL_MAKS);
 
    cout << "Selamat! Kamu menyelesaikan semua level!" << endl;
 
    return 0;
}

