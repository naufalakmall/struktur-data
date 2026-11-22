#include <iostream>
#include "queue.h"
using namespace std;

int main() {
    Queue Q;

    cout << "=== UJI ALTERNATIF 1 ===" << endl;
    createQueue(Q);
    cout << "----------------------\n H - T \t | Queue info\n----------------------\n";
    printInfo_Alt1(Q);
    enqueue_Alt1(Q, 5); printInfo_Alt1(Q);
    enqueue_Alt1(Q, 2); printInfo_Alt1(Q);
    enqueue_Alt1(Q, 7); printInfo_Alt1(Q);
    dequeue_Alt1(Q);    printInfo_Alt1(Q);
    enqueue_Alt1(Q, 4); printInfo_Alt1(Q);
    dequeue_Alt1(Q);    printInfo_Alt1(Q);
    dequeue_Alt1(Q);    printInfo_Alt1(Q);

    cout << "\n=== UJI ALTERNATIF 2 ===" << endl;
    createQueue(Q);
    cout << "----------------------\n H - T \t | Queue info\n----------------------\n";
    printInfo_Alt2(Q);
    enqueue_Alt2(Q, 5); printInfo_Alt2(Q);
    enqueue_Alt2(Q, 2); printInfo_Alt2(Q);
    enqueue_Alt2(Q, 7); printInfo_Alt2(Q);
    dequeue_Alt2(Q);    printInfo_Alt2(Q);
    enqueue_Alt2(Q, 4); printInfo_Alt2(Q);
    dequeue_Alt2(Q);    printInfo_Alt2(Q);
    dequeue_Alt2(Q);    printInfo_Alt2(Q);

    cout << "\n=== UJI ALTERNATIF 3 ===" << endl;
    createQueue(Q);
    cout << "----------------------\n H - T \t | Queue info\n----------------------\n";
    printInfo_Alt3(Q);
    enqueue_Alt3(Q, 5); printInfo_Alt3(Q);
    enqueue_Alt3(Q, 2); printInfo_Alt3(Q);
    enqueue_Alt3(Q, 7); printInfo_Alt3(Q);
    dequeue_Alt3(Q);    printInfo_Alt3(Q);
    enqueue_Alt3(Q, 4); printInfo_Alt3(Q);
    dequeue_Alt3(Q);    printInfo_Alt3(Q);
    dequeue_Alt3(Q);    printInfo_Alt3(Q);

    return 0;
}