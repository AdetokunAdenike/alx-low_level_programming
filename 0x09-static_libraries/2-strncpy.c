#include "main.h"

/**
 * _strncpy - copies up to n characters from the source string to the destination string
 * @dest: pointer to destination string
 * @src: pointer to source string
 * @n: maximum number of characters to copy
 * Return: pointer to the resulting string (dest)
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
    {
	dest[i] = src[i];
    }
	for (; i < n; i++)
    {
	dest[i] = '\0';
    }

	return dest;
}
