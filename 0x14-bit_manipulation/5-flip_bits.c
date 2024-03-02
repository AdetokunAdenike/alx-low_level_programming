#include "main.h"

/**
 * flip_bits - Counts the number of bits to change
 *	to get from one number to another.
 * @num1: First number.
 * @num2: Second number.
 *
 * Return: Number of bits to change.
 */

unsigned int flip_bits(unsigned long int num1, unsigned long int num2)
{
	unsigned long int difference = num1 ^ num2;
	unsigned int bit_count = 0;

	while (difference != 0)
	{
	bit_count += difference & 1;
	difference >>= 1;
	}

	return (bit_count);
}
