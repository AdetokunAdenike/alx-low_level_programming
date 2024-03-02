#include "main.h"

/**
 * set_bit - A program that sets the value of a bit to 1 at a given index.
 * @n: The number to set.
 * @index: The index to set the bit.
 *
 * Return: Returns 1 on success, and -1 if an error occurred.
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int setBit;

	if (index > ((8 - 1) * sizeof(unsigned long int)))

		return (-1);

	setBit = 1 << index;
	*n = *n | setBit;

	return (1);
}

