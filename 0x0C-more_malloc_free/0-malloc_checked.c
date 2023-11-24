#include "main.h"
#include <stdlib.h>
#include <unistd.h>

/**
 * malloc_checked - Allocates memory using malloc.
 * @b: size of the memory to allocate.
 *
 * Return: Pointer to the allocated memory, otherwise exit
 * with status value 98.
*/

void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);

	if (ptr == NULL)
	{
		write(2, "Memory allocation failed\n", 26);

		_exit(98);
	}

	return (ptr);
}
