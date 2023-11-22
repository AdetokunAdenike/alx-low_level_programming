#include "main.h"
#include <stdlib.h>

/**
 * argstostr - Concatenates all the arguments of the program.
 * @ac: Number of arguments.
 * @av: Array of strings (arguments).
 * Return: A pointer to a new string containing concatenated arguments,
 * otherwise NULL.
*/

char *argstostr(int ac, char **av)
{
	int total_length = 0;
	int i, j, k = 0;
	char *result;
	
	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			total_length++;
		}
		total_length++;
	}
	result = malloc(sizeof(char) * (total_length + 1));
	if (result == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
				{
				result[k++] = av[i][j];
				}
				result[k++] = '\n';
	}
	result[k] = '\0';
	return (result);
}

