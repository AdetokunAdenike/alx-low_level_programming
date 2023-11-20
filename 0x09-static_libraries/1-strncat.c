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

    // Find the length of the destination string
    while (dest[dest_len] != '\0')
    {
        dest_len++;
    }

    // Append the characters from src to dest, up to the first n characters
    for (i = 0; src[i] != '\0' && i < n; i++)
    {
        dest[dest_len + i] = src[i];
    }

    // Add the null terminator to the end of the concatenated string
    dest[dest_len + i] = '\0';

    return dest;
}
