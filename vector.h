#ifndef VECTOR_H
#define VECTOR_H

typedef struct vector_t {
    float x;
    float y;
} vector_t;

void Add(vector_t *out, vector_t *in);

#endif