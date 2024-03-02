#include <stdlib.h>
#include "main.h"

/**
 * clear_bit - This program set the value of a bit to 0 at a given index.
 * @n: The parameter.
 * @index: The number index.
 * Return:Returns 1 on success, and -1 on failure.
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 8 * sizeof(n))

		return (-1);

	*n &= ~(1 << index);

	return (1);
}

