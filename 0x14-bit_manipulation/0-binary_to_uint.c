#include "main.h"

/**
 * binary_to_uint - A function convert  binary number in to an unsigned
 *	integer datatype.
 * @b: Pointer to a string containing binary number.
 *
 * Return:Returns unsigned int with decimal value of binary number,
 *	0 on failure.
 */
unsigned int binary_to_uint(const char *b)
{
	int a;
	unsigned int number = 0;

	if (!b)
		return (0);
	for (a = 0; b[a] != '\0'; ++a)
	{
		if (b[a] != '0' && b[a] != '1')
			return (0);
	}
	for (a = 0; b[a] != '\0'; ++a)
	{
		number <<= 1;
		if (b[a] == '1')
			number += 1;
	}
	return (number);
}

