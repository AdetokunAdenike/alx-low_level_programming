#include "main.h"

/**
 * get_endianness - The program checks the endianness.
 *
 * Return: Returns 0 on big endian, and 1 if little endian.
 */

int get_endianness(void)
{
	int x;
	char *y;

	x = 1;
	y = (char *)&x;

	return (*y);
}
