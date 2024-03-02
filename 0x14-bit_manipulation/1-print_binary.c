#include "main.h"

/**
 * base_ pow - The function calculates power of a number.
 * @base: The base number of the exponential.
 * @power: The power of the exponential.
 *
 * Return: value of base to power.
 */
unsigned long int base_pow(unsigned int base, unsigned int power)
{
	unsigned long int number;
	unsigned int x;

	number = 1;
	for (x = 1; x <= power; ++x)
		number *= base;
	return (number);
}

/**
 * print_binary - A funtion that prints a number in binary notation.
 * @n: The number to be converted and printed print.
 *
 * Return: Returns void
 */
void print_binary(unsigned long int n)
{
	unsigned long int factor, status;
	char nonZeroBits;

	nonZeroBits = 0;
	factor = base_pow(2, sizeof(unsigned long int) * 8 - 1);
	while (factor != 0)
	{
		status = n & factor;
		if (status == factor)
		{
			nonZeroBits = 1;
			_putchar('1');
		}
		else if (nonZeroBits == 1 || factor == 1)
		{
			_putchar('0');
		}
		factor >>= 1;
	}
}

