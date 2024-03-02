#include"main.h"

/**
 * get_bit - The program returns the value of a bit at a given index.
 * @n: The number to check bits in.
 * @index: The index to check bit.
 *
 * Return: Returns value of the bit, And -1 on failure.
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int factor, status;

	if (index > (sizeof(unsigned long int) * 8 - 1))
		return (-1);
	factor = 1 << index;
	status = n & factor;
	if (status == factor)
		return (1);

	return (0);
}

