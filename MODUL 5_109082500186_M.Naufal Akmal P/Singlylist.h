#ifndef SINGLYLIST_H
#define SINGLYLIST_H

#include <iostream>
using namespace std;

#define Nil NULL

typedef int infotype;
typedef struct ElmList *address;

struct ElmList {
    infotype info;
    address next;
};

struct List {
    address First;
};

// Prosedur & Fungsi Dasar Linked List (Soal No. 2)
void createList(List &L);
address alokasi(infotype x);
void dealokasi(address &P);
void printInfo(List L);
void insertFirst(List &L, address P);

// Fungsi Pencarian Elemen (Soal No. 3)
address findElm(List L, infotype x);

// Fungsi Menghitung Total Info (Soal No. 4)
int sumInfo(List L);

#endif