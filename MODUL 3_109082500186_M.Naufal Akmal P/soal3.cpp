#include <iostream>
using namespace std;

void tampilArray(int array[3][3]) {

    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            cout << array[i][j] << "\t";
        }
        cout << endl;
    }
}

void tukarArray(int A[3][3], int B[3][3], int baris, int kolom) {

    int temp;

    temp = A[baris][kolom];
    A[baris][kolom] = B[baris][kolom];
    B[baris][kolom] = temp;
}


void tukarPointer(int *a, int *b) {

    int temp;

    temp = *a;
    *a = *b;
    *b = temp;
}


int main() {

    int array1[3][3] = {
        {1,2,3},
        {4,5,6},
        {7,8,9}
    };

    int array2[3][3] = {
        {10,11,12},
        {13,14,15},
        {16,17,18}
    };


    cout << "Array 1 sebelum ditukar:" << endl;
    tampilArray(array1);

    cout << endl;

    cout << "Array 2 sebelum ditukar:" << endl;
    tampilArray(array2);


    tukarArray(array1, array2, 1, 1);


    cout << "\nArray 1 setelah pertukaran posisi [1][1]:" << endl;
    tampilArray(array1);

    cout << endl;

    cout << "Array 2 setelah pertukaran posisi [1][1]:" << endl;
    tampilArray(array2);


    int x = 100;
    int y = 200;

    int *ptr1 = &x;
    int *ptr2 = &y;


    cout << "\nSebelum pertukaran pointer:" << endl;
    cout << "x = " << x << endl;
    cout << "y = " << y << endl;


    tukarPointer(ptr1, ptr2);


    cout << "\nSetelah pertukaran pointer:" << endl;
    cout << "x = " << x << endl;
    cout << "y = " << y << endl;


    return 0;
}