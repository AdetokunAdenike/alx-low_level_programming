#include "main.h"
/**
 * _strlen_recursion - a function that returns the lenght of a string.
 * @s: The string to be measured.*
 * Returns the lenght.
 */
int _strlen_recursion(char *s)
{
	int length = 0;

	if (*s)
	{
		length++;
		length += _strlen_recursion(s + 1);
	}
	return (length);
}

