#include <stdlib.h>
#include "main.h"
#include <string.h>
#include <ctype.h>
/**
 * multiply - Multiplies two positive numbers.
 * @num1: The first number as a string.
 * @num2: The second number as a string.
 */

void multiply(char *num1, char *num2)
{
	int len1 = strlen(num1);
	int len2 = strlen(num2);
	int *result;

	result = malloc(sizeof(int) * (len1 + len2));

	for (int i = 0; i < len1 + len2; i++)
    {
	result[i] = 0;
    }

	for (int i = len1 - 1; i >= 0; i--)
    {
	for (int j = len2 - 1; j >= 0; j--)
        {
		int mul = (num1[i] - '0') * (num2[j] - '0');
		int sum = result[i + j + 1] + mul;
		result[i + j] += sum / 10;
		result[i + j + 1] = sum % 10;
        }
    }

	int start = 0;
	while (start < len1 + len2 - 1 && result[start] == 0)
	{
		start++;
	}

	for (int i = start; i < len1 + len2; i++)
	{
		printf("%d", result[i]);
	}
		printf("\n");

		free(result);
}

/**
 * main - Entry point of the program.
 * @argc: The number of command-line arguments.
 * @argv: An array of command-line argument strings.
 *
 * Return: zero on success, 98 on failure.
 */

int main(int argc, char *argv[])
{
	if (argc != 3)
    {
	printf("Error\n");
	return 98;
    }

	char *num1 = argv[1];
	char *num2 = argv[2];

	for (int i = 0; num1[i] != '\0'; i++)
    {
	if (!isdigit(num1[i]))
	{
		printf("Error\n");
		return 98;
	}
    }

	for (int i = 0; num2[i] != '\0'; i++)
    {
	if (!isdigit(num2[i]))
	{
	printf("Error\n");
		return 98;
	}
    }
	multiply(num1, num2);

	return 0;
}
