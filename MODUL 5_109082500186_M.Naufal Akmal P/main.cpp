#include <iostream>
#include "Singlylist.h"

using namespace std;

int main()
{
    List L;
    address P1, P2, P3, P4, P5;
    P1 = P2 = P3 = P4 = P5 = Nil;

    // 1. Inisialisasi List
    createList(L);

    // 2. Alokasi dan Insert Data (Urutan dimasukkan agar membentuk: 9 -> 12 -> 8 -> 0 -> 2)
    P1 = alokasi(2);
    insertFirst(L, P1);

    P2 = alokasi(0);
    insertFirst(L, P2);

    P3 = alokasi(8);
    insertFirst(L, P3);

    P4 = alokasi(12);
    insertFirst(L, P4);

    P5 = alokasi(9);
    insertFirst(L, P5);

    // Output Soal No. 2: Cetak seluruh isi list
    printInfo(L);

    // Output Soal No. 3: Cari elemen dengan info 8
    infotype x = 8;
    address P = findElm(L, x);
    if (P != Nil) {
        cout << x << " ditemukan dalam list" << endl;
    } else {
        cout << x << " tidak ditemukan dalam list" << endl;
    }

    // Output Soal No. 4: Hitung jumlah total elemen
    int total = sumInfo(L);
    cout << "Total info dari kelima elemen adalah " << total << endl;

    return 0;
}