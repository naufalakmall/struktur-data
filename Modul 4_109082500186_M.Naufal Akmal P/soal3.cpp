#include <iostream>

using namespace std;

struct Node {
    int data;
    Node* next;
};

Node* head = nullptr;

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

int hitungJumlahTotal() {
    int sum = 0;
    Node* temp = head;
    
    while (temp != nullptr) {
        sum += temp->data;
        temp = temp->next;
    }
    
    return sum;
}

int main() {
    int n, nilai;

    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> nilai;
        insertLast(nilai);
    }

    cout << hitungJumlahTotal() << endl;

    return 0;
}