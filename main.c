#include <stdio.h>
#include "vector.h"

int main()
{
    vector_t first;
    first.x = 7.0f;
    first.y = 5.0f;

    vector_t second;
    second.x = 1.0f;
    second.y = 1.0f;

    Add(&first, &second);
    printf(
        "first.x = %f, first.y = %f\n",
        first.x,
        first.y
    );
    
    return 0;
}