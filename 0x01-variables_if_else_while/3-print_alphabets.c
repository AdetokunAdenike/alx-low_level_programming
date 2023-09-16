#include <stdio.h>

/**
 * main - A program that prints the alphabet in lowercase, and then in uppercase
 *
 * Return: Always 0.
 */
int main()
{
	char letter = 'a';
	while (letter <= 'z')
	{
		putchar(letter);
		letter++;
	}
	letter = 'A';
	while (letter <= 'Z')
	{
		putchar(letter);
		letter++;
	}
	putchar('\n');

	return (0);
}
