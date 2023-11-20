#include "main.h"

/**
 * _strcpy - copies the string pointed to by src, including the null terminator,
 *           to the buffer pointed to by dest
 * @dest: pointer to the destination buffer
 * @src: pointer to the source string
 * Return: pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
    char *original_dest = dest;

    while (*src != '\0')
    {
        *dest = *src;
        dest++;
        src++;
    }

    *dest = '\0';  // Append the null terminator to the destination string

    return original_dest;
}
