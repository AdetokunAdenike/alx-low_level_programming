#include "main.h"
#include <stdlib.h>

/**
 * str_concat - concatenates two strings.
 * @s1: first parameter.
 * @s2: second parameter.
 *
 * Returns: returns character pointer upon success, NULL otherwise.
*/

char *str_concat(char *s1, char *s2)
{
	char *A;
	int s1_length = 0;
	int s2_length = 0;
	int i;
	int j;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}

	while (s1[s1_length] != '\0')
		s1_length++;
	while (s2[s2_length] != '\0')
		s2_length++;

	A = malloc(sizeof(char) * (s1_length + s2_length) + 1);
	if (A == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < s1_length; ++i)
	{
		A[i] = s1[i];
	}
	for (j = 0; j < s2_length; ++j)
		A[i + j] = s2[j];
	A[i + j] = '\0';
	{
	return (A);
	}
}
