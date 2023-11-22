#include "main.h"
#include <stdlib.h>

/**
 * strtow - Splits a string into words.
 * @str: Input string.
 *
 * Return: Pointer to an array of strings (words), NULL on failure.
 */
char **strtow(char *str)
{
	int num_words = 0, in_word = 0;
	char **result = NULL;
	char *start = str;
	int i;

	if (str == NULL || *str == '\0')
		return (NULL);

	while (*str)
	{
		if (*str == ' ')
		{
			if (in_word)
			{
				result = malloc(sizeof(char *) * (num_words + 2));
				if (result == NULL)
					return (NULL);

				result[num_words] = malloc(str - start + 1);
				if (result[num_words] == NULL)
				{
					free(result);
					return (NULL);
				}

				for (i = 0; start + i < str; i++)
					result[num_words][i] = start[i];
				result[num_words][i] = '\0';

				num_words++;
				in_word = 0;
			}
		}
		else if (!in_word)
		{
			start = str;
			in_word = 1;
		}
		str++;
	}

	if (in_word)
	{
		result = malloc(sizeof(char *) * (num_words + 2));
		if (result == NULL)
			return (NULL);

		result[num_words] = malloc(str - start + 1);
		if (result[num_words] == NULL)
		{
			free(result);
			return (NULL);
		}

		for (i = 0; start + i < str; i++)
			result[num_words][i] = start[i];
		result[num_words][i] = '\0';

		num_words++;
	}

	result[num_words] = NULL;
	return (result);
}

