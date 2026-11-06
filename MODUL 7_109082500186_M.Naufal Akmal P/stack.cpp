#include "stack.h"

void createStack(Stack &S) {
    S.top = -1;
}

void Push(Stack &S, infotype x) {
    if (S.top < 19) {
        S.top++;
        S.info[S.top] = x;
    } else {
        cout << "Stack Penuh!" << endl;
    }
}

infotype pop(Stack &S) {
    if (S.top >= 0) {
        infotype x = S.info[S.top];
        S.top--;
        return x;
    } else {
        cout << "Stack Kosong!" << endl;
        return -1;
    }
}
void printInfo(Stack S) {
    cout << "[TOP]";
    for (int i = S.top; i >= 0; i--) {
        cout << " " << S.info[i];
    }
    cout << endl;
}

void balikStack(Stack &S) {
    int i = 0;
    int j = S.top;
    while (i < j) {
        infotype temp = S.info[i];
        S.info[i] = S.info[j];
        S.info[j] = temp;
        i++;
        j--;
    }
}

void pushAscending(Stack &S, infotype x) {
    Stack tempS;
    createStack(tempS);

    while (S.top >= 0 && S.info[S.top] > x) {
        Push(tempS, pop(S));
    }

    Push(S, x);

    while (tempS.top >= 0) {
        Push(S, pop(tempS));
    }
}

void getInputStream(Stack &S) {
    char ch;
    while (cin.get(ch) && ch != '\n') {
        if (ch >= '0' && ch <= '9') {
            Push(S, ch - '0');
        }
    }
}