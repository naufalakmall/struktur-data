#include "bstree.h"

// Mengalokasikan memori untuk node baru
address alokasi(infotype x) {
    address P = new Node;
    if (P != Nil) {
        P->info = x;
        P->left = Nil;
        P->right = Nil;
    }
    return P;
}

// Menyisipkan node baru ke dalam BST (mengabaikan nilai duplikat)
void insertNode(address &root, infotype x) {
    if (root == Nil) {
        root = alokasi(x);
    } else if (x < root->info) {
        insertNode(root->left, x);
    } else if (x > root->info) {
        insertNode(root->right, x);
    }
}

// Mencari node berdasarkan nilai x
address findNode(infotype x, address root) {
    if (root == Nil || root->info == x) {
        return root;
    }
    if (x < root->info) {
        return findNode(x, root->left);
    } else {
        return findNode(x, root->right);
    }
}

// Mencetak isi tree secara In-Order (Kiri -> Root -> Kanan)
void printInorder(address root) {
    if (root != Nil) {
        printInorder(root->left);
        cout << root->info << " - ";
        printInorder(root->right);
    }
}

void InOrder(address root) {
    printInorder(root);
}

// Menghitung total banyaknya node pada tree
int hitungJumlahNode(address root) {
    if (root == Nil) {
        return 0;
    }
    return 1 + hitungJumlahNode(root->left) + hitungJumlahNode(root->right);
}

// Menghitung total penjumlahan nilai info dari seluruh node
int hitungTotalInfo(address root, int start) {
    if (root == Nil) {
        return start;
    }
    return root->info + hitungTotalInfo(root->left, 0) + hitungTotalInfo(root->right, 0) + start;
}

// Menghitung kedalaman maksimal (tinggi) dari binary tree
int hitungKedalaman(address root, int start) {
    if (root == Nil) {
        return start;
    }
    int kedalamanKiri = hitungKedalaman(root->left, start + 1);
    int kedalamanKanan = hitungKedalaman(root->right, start + 1);
    
    return (kedalamanKiri > kedalamanKanan) ? kedalamanKiri : kedalamanKanan;
}

// Mencetak isi tree secara Pre-Order (Root -> Kiri -> Kanan)
void printPreOrder(address root) {
    if (root != Nil) {
        cout << root->info << " - ";
        printPreOrder(root->left);
        printPreOrder(root->right);
    }
}

// Mencetak isi tree secara Post-Order (Kiri -> Kanan -> Root)
void printPostOrder(address root) {
    if (root != Nil) {
        printPostOrder(root->left);
        printPostOrder(root->right);
        cout << root->info << " - ";
    }
}