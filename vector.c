#include "vector.h"
#include <stdlib.h>

int vector_init(struct Vector *vec, size_t capacity) {
    vec->arr = malloc(capacity * sizeof(struct Vector));
    if (vec->arr == NULL)
    {
        return 0;
    }

    vec->capacity = capacity;
    vec->size = 0;
    

    return 1;
}

int vector_push(struct Vector *vec, int value) {
    // increase capacity if out of space
    if (vec->size == vec->capacity) {
        size_t new_capacity = (vec->capacity == 0) ? 1 : vec->capacity * 2;

        int *temp = realloc(vec->arr, new_capacity * sizeof(int));
        if (temp == NULL) {
            return 0;
        }
        vec->arr = temp;
        vec->capacity = new_capacity;
    }

    // insert element if space avaliable
    vec->arr[vec->size] = value;
    vec->size++;

    return 1;
}

void vector_free(struct Vector *vec) {
    free(vec->arr);
    vec->arr = NULL;
    vec->size = 0;
    vec->capacity = 0;
}