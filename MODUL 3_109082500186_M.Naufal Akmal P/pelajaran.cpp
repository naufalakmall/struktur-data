#include "pelajaran.h"
#include <iostream>

using namespace std;

pelajaran create_pelajaran(string namapel, string kodepel) {

    pelajaran pel;

    pel.namaPel = namapel;
    pel.kodeMapel = kodepel;

    return pel;
}


void tampil_pelajaran(pelajaran pel) {

    cout << "nama pelajaran : " << pel.namaPel << endl;
    cout << "nilai : " << pel.kodeMapel << endl;

}