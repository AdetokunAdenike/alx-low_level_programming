#include "stddef.h"
/*
 * _memset - fills memory with a constant byte.
 * @s: source string
 * @b: the contant byte for filling
 * @n: lenght of buffer
 * Return: new string.
 */
char *_memset(char *s, char b, unsigned int n)
{
    char *start = s;

    while (n--) {
        *s = b;
        s++;
    }

    return start;
}
