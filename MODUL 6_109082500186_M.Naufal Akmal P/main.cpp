#include <iostream>
#include "Doublylist.h"

using namespace std;

int main() {
    List L;
    CreateList(L);
    infotype data;
    address P;

    for (int i = 0; i < 4; i++) {
        cout << "masukkan nomor polisi: ";
        cin >> data.nopol;
        cout << "masukkan warna kendaraan: ";
        cin >> data.warna;
        cout << "masukkan tahun kendaraan: ";
        cin >> data.thnBuat;

        if (findElm(L, data) != NULL) {
            cout << "nomor polisi sudah terdaftar" << endl;
        } else {
            P = alokasi(data);
            insertFirst(L, P);
        }
        cout << endl;
    }

    cout << "DATA LIST 1" << endl << endl;
    printInfo(L);
    cout << endl;

    string cariNopol;
    cout << "Masukkan Nomor Polisi yang dicari  : ";
    cin >> cariNopol;
    cout << endl;

    infotype cariData;
    cariData.nopol = cariNopol;
    address found = findElm(L, cariData);

    if (found != NULL) {
        cout << "Nomor Polisi : " << found->info.nopol << endl;
        cout << "Warna        : " << found->info.warna << endl;
        cout << "Tahun        : " << found->info.thnBuat << endl;
    } else {
        cout << "Data tidak ditemukan." << endl;
    }
    cout << endl;

    string hapusNopol;
    cout << "Masukkan Nomor Polisi yang akan dihapus  : ";
    cin >> hapusNopol;

    infotype hapusData;
    hapusData.nopol = hapusNopol;
    address target = findElm(L, hapusData);

    if (target != NULL) {
        address deletedNode = NULL;
        if (target == L.First) {
            deleteFirst(L, deletedNode);
        } else if (target == L.Last) {
            deleteLast(L, deletedNode);
        } else {
            deleteAfter(target->prev, deletedNode);
        }

        if (deletedNode != NULL) {
            cout << "Data dengan nomor polisi " << hapusNopol << " berhasil dihapus." << endl;
            dealokasi(deletedNode);
        }
    } else {
        cout << "Data tidak ditemukan." << endl;
    }
    cout << endl;

    cout << "DATA LIST 1" << endl << endl;
    printInfo(L);

    return 0;
}