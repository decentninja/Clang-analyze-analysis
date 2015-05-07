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

// Should have thrown warning in static analyzer, did not
int negativearray() {
    int a = -10;
    int* x = (int*) malloc(sizeof(int) * 10);
    for(int i = 0; i < 10; i++) {
        x[i] = i;
    }
    return x[a];
}

int garbagearray() {
    int* x = (int*) malloc(sizeof(int) * 10);
    x[0] = 1;
    return x[2];
}

int main() {
    useafterfree();
    garbage();
    escape(0);
    negativearray();
    garbagearray();
    return 0;
}

