#include "main.h"
#include <stdio.h>
#include <unistd.h>
/**
 * _puts - Custom implementation of puts.
 * @str: String to be printed.
*/

void _puts(char *str)
{
	while (*str != '\0')
	{
		write(1, str, 1);
		str++;
	}

	write(1, "\n", 1);
}
