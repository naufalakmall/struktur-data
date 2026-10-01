#include <iostream>
#include <string>

using namespace std;

int hitungKarakter(const string& kata, char target) {
    int jumlah = 0;
    for (char c : kata) {
        if (c == target) {
            jumlah++;
        }
    }
    return jumlah;
}

int main() {
    string kata;
    char target;

    cin >> kata;
    cin >> target;

    int hasil = hitungKarakter(kata, target);
    cout << hasil << endl;

    return 0;
}