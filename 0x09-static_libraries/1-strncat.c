#include "main.h"

/**
 * _strncat - concatenates two strings, using at most n
 * bytes from src
 * @dest: destination string, where the result is stored
 * @src: source string to be appended
 * @n: maximum number of bytes to append
 * Return: pointer to the resulting string (dest)
 */
char *_strncat(char *dest, char *src, int n)
{
    int dest_len = 0;
    int i;
    while (dest[dest_len] != '\0')
    {
        dest_len++;
    }

    for (i = 0; src[i] != '\0' && i < n; i++)
    {
        dest[dest_len + i] = src[i];
    }

    dest[dest_len + i] = '\0';

    return dest;
}
