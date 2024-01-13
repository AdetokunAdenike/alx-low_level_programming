#include "main.h"

/**
 * _atoi - converts a string to an integer.
 * @s: pointer to the string to be converted.
 * Return: returns the converted integer.
 */

int _atoi(char *s)
{
	int result = 0;
	int sign = 1;

	while (*s == ' ' || (*s >= 9 && *s <= 13))
    {
 	s++;
    }
	if (*s == '-' || *s == '+')
    {
	sign = (*s == '-') ? -1 : 1;
	s++;
    }
	while (*s >= '0' && *s <= '9')
    {
	result = result * 10 + (*s - '0');
	s++;
    }

	return result * sign;
}
