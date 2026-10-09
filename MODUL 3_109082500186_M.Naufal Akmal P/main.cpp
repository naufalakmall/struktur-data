#include <iostream>
#include "pelajaran.h"

using namespace std;

int main() {

    string namapel = "Struktur Data";
    string kodepel = "STD";

    pelajaran pel;

    pel = create_pelajaran(namapel, kodepel);

    tampil_pelajaran(pel);

    return 0;
}