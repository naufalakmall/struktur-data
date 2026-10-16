#include <iostream>

using namespace std;

// Struktur Node untuk Linked List
struct Node {
    int data;
    Node* next;
};

// Pointer untuk head (awal list)
Node* head = nullptr;

// Fungsi untuk menambahkan data di akhir (insertLast) saat pembentukan list awal
void insertLast(int nilai) {
    Node* newNode = new Node();
    newNode->data = nilai;
    newNode->next = nullptr;

    if (head == nullptr) {
        head = newNode;
    } else {
        Node* temp = head;
        while (temp->next != nullptr) {
            temp = temp->next;
        }
        temp->next = newNode;
    }
}

// Fungsi untuk menyisipkan data baru setelah data yang dicari (insertAfter)
void insertAfter(int cariNilai, int nilaiBaru) {
    Node* temp = head;
    
    // Mencari posisi data
    while (temp != nullptr && temp->data != cariNilai) {
        temp = temp->next;
    }

    // Jika data ditemukan, lakukan penyisipan
    if (temp != nullptr) {
        Node* newNode = new Node();
        newNode->data = nilaiBaru;
        newNode->next = temp->next;
        temp->next = newNode;
    }
}

// Fungsi untuk menampilkan isi linked list
void tampilkanList() {
    Node* temp = head;
    while (temp != nullptr) {
        cout << temp->data;
        if (temp->next != nullptr) {
            cout << " -> ";
        }
        temp = temp->next;
    }
    cout << endl;
}

int main() {
    int n, nilai, cariNilai, nilaiBaru;

    // Baris pertama: jumlah elemen list awal (N) diikuti oleh N buah bilangan bulat
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> nilai;
        insertLast(nilai);
    }

    // Baris kedua: bilangan yang dicari
    cin >> cariNilai;

    // Baris ketiga: bilangan baru yang akan disisipkan
    cin >> nilaiBaru;

    // Proses penyisipan setelah data ditemukan
    insertAfter(cariNilai, nilaiBaru);

    // Keluaran: menampilkan isi list setelah proses penyisipan
    tampilkanList();

    return 0;
}