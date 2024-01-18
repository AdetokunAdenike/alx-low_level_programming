#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * strtow - Splits a string into words.
 * @str: Input string.
 * Return: Pointer to an array of strings, otherwise NULL.
 */
char **strtow(char *str)
{
	int len = 0;
	int word_count = 0;
	int i = 0;
	int word_index = 0;
	int word_start = 0;
	char **words;
	int j = 0;
	int k = 0;

	if (str == NULL || *str == '\0')
    {
	return (NULL);
    }

	while (str[len] != '\0')
    {
	len++;
    }

	while (i < len)
    {
	if (str[i] != ' ' && (i == 0 || str[i - 1] == ' '))
        {
	word_count++;
        }
	i++;
    }

	words = (char **)malloc((word_count + 1) * sizeof(char *));
	if (words == NULL)
    {
	return (NULL);
    }

	while (i <= len)
    {
		if (str[i] == ' ' || str[i] == '\0')
        {
		if (i > word_start)
            {
		words[word_index] = (char *)malloc((i - word_start + 1) * sizeof(char));
		if (words[word_index] == NULL)
                {
		while (j < word_index)
                    {
			free(words[j]);
			j++;
                    }
			free(words);
			return (NULL);
                }

		while (k < (i - word_start))
                {
		words[word_index][k] = str[word_start + k];
			k++;
                }
		words[word_index][k] = '\0';

		word_index++;
            }

		word_start = i + 1;
        }
	i++;
    }

	words[word_index] = (NULL);

	return (words);
}

