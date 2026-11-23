#include <iostream>
#include "bstree.h"

using namespace std;

int main() {
    cout << "Hello World!" << endl;
    address root = Nil;

    insertNode(root, 1);
    insertNode(root, 2);
    insertNode(root, 6);
    insertNode(root, 4);
    insertNode(root, 5);
    insertNode(root, 3);
    insertNode(root, 6); // Nilai duplikat, otomatis diabaikan
    insertNode(root, 7);

    // Output Soal 1 (In-Order)
    InOrder(root);
    cout << "\n";

    // Output Soal 2
    cout << "kedalaman : " << hitungKedalaman(root, 0) << endl;
    cout << "jumlah Node : " << hitungJumlahNode(root) << endl;
    cout << "total : " << hitungTotalInfo(root, 0) << endl;

    // Output Soal 3 (Pre-Order & Post-Order)
    cout << "\nPre-Order : ";
    printPreOrder(root);
    cout << "\nPost-Order : ";
    printPostOrder(root);
    cout << endl;

    return 0;
}