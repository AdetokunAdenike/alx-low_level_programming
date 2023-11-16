#include "main.h"

/**
  * factorial - function parameter
  * @n: parameter
  * Returns function n.
  */

int factorial(int n)
{
	if (n < 0)
	{
	return (-1);
	}
	if (n == 0)
	{
	return (1);
	}
	else 
	{
	return (n * factorial(n - 1));
	}
}
