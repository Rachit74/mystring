#ifndef VECTOR_H
#define VECTOR_H

#include <stddef.h>

struct Vector {
    int *arr;
    size_t capacity;
    size_t size;
};

int vector_init(struct Vector *vec, size_t capacity);
int vector_push(struct Vector *vec, int value);
void vector_free(struct Vector *vec);


#endif