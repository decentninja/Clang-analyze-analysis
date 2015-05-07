#include <stdlib.h>


void useafterfree() {
    int* x = (int*) malloc(sizeof(int));
    free(x);
    *x = 3;
}

int garbage() {
    int x = 3;
    int b;
    if(x > 0) {
        x = b;
    } else {
        x = 10;
    }
    return x;
}

void escape(int y) {
    int* x = (int*) malloc(sizeof(int));
    if(y == 0) {
        free(x);
    }
}

int main() {
    useafterfree();
    garbage();
    escape(0);
    return 0;
}

