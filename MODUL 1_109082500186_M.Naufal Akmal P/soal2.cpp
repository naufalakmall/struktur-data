#include <iostream>

using namespace std;

int main() {
    int angka;

    cout << "Masukkan angka (0-100): ";
    cin >> angka;

    if (angka < 0 || angka > 100) {
        cout << "Angka harus antara 0 sampai 100";
    }
    else if (angka == 100) {
        cout << angka << " : seratus";
    }
    else {
        string satuan[] = {
            "nol", "satu", "dua", "tiga", "empat",
            "lima", "enam", "tujuh", "delapan", "sembilan"
        };

        if (angka < 10) {
            cout << angka << " : " << satuan[angka];
        }
        else if (angka < 20) {
            if (angka == 10)
                cout << angka << " : sepuluh";
            else if (angka == 11)
                cout << angka << " : sebelas";
            else
                cout << angka << " : " << satuan[angka-10] << " belas";
        }
        else {
            int puluhan = angka / 10;
            int sisa = angka % 10;

            string puluh[] = {
                "", "", "dua puluh", "tiga puluh",
                "empat puluh", "lima puluh",
                "enam puluh", "tujuh puluh",
                "delapan puluh", "sembilan puluh"
            };

            cout << angka << " : " << puluh[puluhan];

            if (sisa != 0) {
                cout << " " << satuan[sisa];
            }
        }
    }

    return 0;
}