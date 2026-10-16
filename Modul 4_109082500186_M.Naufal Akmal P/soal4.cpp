
#include <iostream>
#include <string>
using namespace std;

struct Buku {
    string judul;
    int tahun;
    Buku* next;
};

Buku* head = nullptr;

void tambahBuku(string judul, int tahun) {
    Buku* baru = new Buku;
    baru->judul = judul;
    baru->tahun = tahun;
    baru->next = nullptr;

    if (head == nullptr) {
        head = baru;
    } else {
        Buku* bantu = head;
        while (bantu->next != nullptr) {
            bantu = bantu->next;
        }
        bantu->next = baru;
    }
}

void deleteLast() {
    if (head == nullptr) {
        return;
    }

    if (head->next == nullptr) {
        delete head;
        head = nullptr;
        return;
    }

    Buku* bantu = head;

    while (bantu->next->next != nullptr) {
        bantu = bantu->next;
    }

    delete bantu->next;
    bantu->next = nullptr;
}

void tampilkanBuku() {
    cout << "Daftar Buku:" << endl;

    Buku* bantu = head;

    while (bantu != nullptr) {
        cout << bantu->judul << " ("
            << bantu->tahun << ")" << endl;
        bantu = bantu->next;
    }
}

int main() {
    int N;
    string judul;
    int tahun;

    cin >> N;
    cin.ignore();

    for (int i = 0; i < N; i++) {
        cin >> judul >> tahun;
        tambahBuku(judul, tahun);
    }

    deleteLast();
    tampilkanBuku();

    while (head != nullptr) {
        Buku* hapus = head;
        head = head->next;
        delete hapus;
    }

    return 0;
}