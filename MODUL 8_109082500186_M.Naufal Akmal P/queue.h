#ifndef QUEUE_H
#define QUEUE_H

#include <iostream>
using namespace std;

typedef int infotype;

struct Queue {
    infotype info[5];
    int head;
    int tail;
};

// Fungsi Umum (Sama untuk semua alternatif)
void createQueue(Queue &Q);
bool isEmptyQueue(Queue Q);

// --- ALTERNATIF 1 (Head Diam, Tail Bergerak) ---
bool isFullQueue_Alt1(Queue Q);
void enqueue_Alt1(Queue &Q, infotype x);
infotype dequeue_Alt1(Queue &Q);
void printInfo_Alt1(Queue Q);

// --- ALTERNATIF 2 (Head Bergerak, Tail Bergerak) ---
bool isFullQueue_Alt2(Queue Q);
void enqueue_Alt2(Queue &Q, infotype x);
infotype dequeue_Alt2(Queue &Q);
void printInfo_Alt2(Queue Q);

// --- ALTERNATIF 3 (Head dan Tail Berputar) ---
bool isFullQueue_Alt3(Queue Q);
void enqueue_Alt3(Queue &Q, infotype x);
infotype dequeue_Alt3(Queue &Q);
void printInfo_Alt3(Queue Q);

#endif