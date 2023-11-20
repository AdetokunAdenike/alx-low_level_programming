#include "main.h"
/**
 * _strpbrk - locates the first occurrence in a string of
 * any character from a specified set of characters
 * @s: pointer to the string to be searched
 * @accept: pointer to the set of characters to search for
 * Return: pointer to the first occurrence in s of any character in accept,
 * or a pointer to the terminating null byte if no such character is found
 */
char *_strpbrk(char *s, char *accept)
{
    while (*s != '\0')
    {
        char *check = accept;
        while (*check != '\0')
        {
            if (*s == *check)
            {
                return s;
            }
            check++;
        }
        s++;
    }

    return s;
}
