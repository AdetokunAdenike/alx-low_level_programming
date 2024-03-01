#include <stdio.h>

/**
 * main - Entry point.
 *
 * Return: 0 on success.
 */

int main(void)
{
	double x, y;

	printf("Enter the first number: ");
	scanf("%lf", &x);

	printf("Enter the second number: ");
	scanf("%lf", &y);

	double result = (x * y);

	printf("The answer is %.2lf", result);

	return (0);
}
