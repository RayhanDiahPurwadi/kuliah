#include "vector.h"

void Add(vector_t *out, vector_t *in)
{
    out->x += in->x;
    out->y += in->y;
}