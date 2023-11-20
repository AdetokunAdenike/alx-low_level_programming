#include "main.h"

/**
 * _strstr - locates the first occurrence of the substring needle in haystack
 * @haystack: pointer to the string to be searched
 * @needle: pointer to the substring to search for
 * Return: pointer to the beginning of the located substring,
 * or a pointer to the end of the haystack if the substring is not found
 */
char *_strstr(char *haystack, char *needle)
{
    char *h, *n;

    while (*haystack)
    {
        h = haystack;
        n = needle;

        while (*haystack && *n && *haystack == *n)
        {
            haystack++;
            n++;
        }

        if (!*n)
            return h;

        haystack = h + 1;
    }

    return haystack; // Pointer to the end of haystack if substring is not found
}
