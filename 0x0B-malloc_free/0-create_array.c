#include "main.h"
#include <stdlib.h>



char *create_array(unsigned int size, char c)

{
    char *A;
    unsigned int i;

    if (size == 0)
    {
        return NULL;
    }

    A = malloc(size *sizeof(char));
    if (A == NULL)
    {
        return NULL;
    }
    for (i = 0; i < size; i++)
          A[i] = c;
    return (A);
}
