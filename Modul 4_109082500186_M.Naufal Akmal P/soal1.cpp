#include <iostream>
#include <string>

using namespace std;

struct Node {
    string nama;
    Node* next;
};

Node* head = nullptr;

void tambahNasabah(string namaBaru) {
    Node* newNode = new Node();
    newNode->nama = namaBaru;
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

void layaniNasabah() {
    if (head == nullptr) {
        cout << "Antrean kosong." << endl;
        return;
    }

    Node* temp = head;
    cout << "Melayani: " << temp->nama << endl;
    head = head->next;
    delete temp;
}

void tampilkanAntrean() {
    if (head == nullptr) {
        cout << "Antrean: (kosong)" << endl;
        return;
    }

    cout << "Antrean: ";
    Node* temp = head;
    while (temp != nullptr) {
        cout << temp->nama;
        if (temp->next != nullptr) {
            cout << " -> ";
        }
        temp = temp->next;
    }
    cout << endl;
}

int main() {
    int pilihan;
    string nama;

    do {
        cin >> pilihan;

        switch (pilihan) {
            case 1:
                cin >> nama;
                tambahNasabah(nama);
                tampilkanAntrean();
                break;
            case 2:
                layaniNasabah();
                tampilkanAntrean();
                break;
            case 3:
                // Keluar program
                break;
            default:
                break;
        }
    } while (pilihan != 3);

    return 0;
}