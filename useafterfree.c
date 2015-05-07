#include <stdlib.h>


int main() {
    int* block = (int*) malloc(sizeof(int));
    free(block);
    *block = 3;
    return 0;
}
