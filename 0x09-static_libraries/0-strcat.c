#include "main.h"

/**
 * _strcat - concatenates two strings
 * @dest: destination string, where the result is stored
 * @src: source string to be appended
 * Return: pointer to the resulting string (dest)
 */
char *_strcat(char *dest, char *src)
{
    int dest_len = 0;
    int i;

    // Find the length of the destination string
    while (dest[dest_len] != '\0')
    {
        dest_len++;
    }

    // Append the characters from src to dest
    for (i = 0; src[i] != '\0'; i++)
    {
        dest[dest_len + i] = src[i];
    }

    // Add the null terminator to the end of the concatenated string
    dest[dest_len + i] = '\0';

    return dest;
}
