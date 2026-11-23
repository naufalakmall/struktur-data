#ifndef BSTREE_H
#define BSTREE_H

#include <iostream>
using namespace std;

#define Nil NULL

typedef int infotype;
typedef struct Node *address;

struct Node {
    infotype info;
    address left;
    address right;
};

// Soal 1: Fungsi dasar BST
address alokasi(infotype x);
void insertNode(address &root, infotype x);
address findNode(infotype x, address root);
void printInorder(address root);
void InOrder(address root); // Wrapper agar sesuai pemanggilan di main.cpp pada modul

// Soal 2: Fungsi perhitungan BST
int hitungJumlahNode(address root);
int hitungTotalInfo(address root, int start = 0);
int hitungKedalaman(address root, int start);

// Soal 3: Traversal Pre-Order dan Post-Order
void printPreOrder(address root);
void printPostOrder(address root);

#endif