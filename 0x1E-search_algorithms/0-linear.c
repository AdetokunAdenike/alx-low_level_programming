#include <stddef.h>
#include <stdio.h>
#include "search_algos.h"

/**
 * linear_search - A linear search algorithm
 * @array: array of ints
 * @size: size of array
 * @value: value to search for
 * Return: position or -1 if not found
 *
 */

int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (array == NULL)
		return (-1);

	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%lu] = [%d]\n", i, array[i]);

		if (array[i] == value)
			return (i);
	}
	return (-1);
}
