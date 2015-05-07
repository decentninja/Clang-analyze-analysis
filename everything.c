#include <stdlib.h>


void useafterfree() {
    int* block = (int*) malloc(sizeof(int));
    free(block);
    *block = 3;
}


char const* proliferation() {
    return (char[1]){ 0 };
}


int main() {
    useafterfree();
    return 0;
}
