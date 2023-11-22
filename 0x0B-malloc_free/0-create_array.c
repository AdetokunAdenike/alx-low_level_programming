#include "main.h"
#include <stdlib>



char *create_array(unsigned int size, char c)

{
    if (size == 0)
    {
        return NULL;
    }
    char *A = (char *)malloc(size * sizeof(char));
    
    if (A == NULL)
    {
        return NULL;
    }
    unsigned int i;
    for (i = 0; i < size; i++)
    {
        A[i] = c;
    }
    return A;
}