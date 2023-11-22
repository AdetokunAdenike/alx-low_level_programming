#include "main.h"
#include <stdlib.h>

/**
 * create_array - Creates an array of chars.
 * @size: Size of memory to print.
 * @c: character to be initialized.
 * Return: pointer on success, otherwise NULL.
*/

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
    return A;
}
