#include "main.h"

/**
 * _strstr - locates the first occurrence of the substring needle in haystack
 * @haystack: pointer to the string to be searched
 * @needle: pointer to the substring to search for
 * Return: pointer to the beginning of the located substring,
 *         or NULL if the substring is not found
 */
char *_strstr(char *haystack, char *needle)
{
    char *haystack_ptr;
    char *needle_ptr;

    while (*haystack != '\0')
    {
        haystack_ptr = haystack;
        needle_ptr = needle;

        while (*needle_ptr != '\0' && *haystack_ptr == *needle_ptr)
        {
            haystack_ptr++;
            needle_ptr++;
        }

        if (*needle_ptr == '\0')
        {
            return haystack;  // Return a pointer to the beginning of the located substring
        }

        haystack++;
    }

    return NULL;  // Return NULL if the substring is not found
}
