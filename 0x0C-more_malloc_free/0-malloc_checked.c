#include "main.h"
#include <stdlib.h>
#include <unistd.h>

/**
 * malloc_checked - Allocates memory using malloc.
 * @b: size of the memory to allocate.
 *
 * Return: Pointer to the allocated memory.
 * Exit with status value 98 if malloc fails.
*/

void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);

	if (ptr == NULL)
	{
		exit(98);

		free(ptr);
	}

	return (ptr);
}
