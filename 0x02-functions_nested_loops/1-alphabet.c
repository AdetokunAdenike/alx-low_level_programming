#include "main.h"

/**
 * print_alphabet - prints the alphabet in lowercase, followed by a new line.
 *
 * Return 0
 */
int main(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
		_putchar(letter);

	_putchar('\n');

	return(0);
}
