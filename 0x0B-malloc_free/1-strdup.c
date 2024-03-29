#include "main.h"
#include <stdlib.h>

/**
 * _strdup - returns a pointer to newly allocated space in memory.
 * @str: string parameter.
 * Return: char pointer upon success, otherwise NULL.
*/

char *_strdup(char *str)
{
	char *A;
	int count;
	int i;

	if (str == NULL)
	{
		return (NULL);
	}
	count = 0;
	while (str[count] != '\0')
		count++;
	A = malloc(sizeof(*str) * count + 1);
	if (A == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < count; ++i)
		A[i] = str[i];
	A[i] = '\0';
	return (A);
}
