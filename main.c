#include <stdio.h>
#include "mystring.h"
#include "vector.h"
#include <stdlib.h>

int main() {

    struct Vector vector;

    vector_init(&vector, 5);
    vector_push(&vector, 1);
    vector_push(&vector, 2);
    vector_push(&vector, 3);
    vector_push(&vector, 4);
    vector_push(&vector, 5);
    

    for(size_t i = 0; i < vector.size; i++) {
        printf("%d\n", vector.arr[i]);
    }
        
    vector_free(&vector);
    return 0;
}