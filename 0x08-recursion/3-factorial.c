#include "main.h"

/**
  * factorial - function parameter
  * @n: function parameter
  * Returns: Function n.
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
