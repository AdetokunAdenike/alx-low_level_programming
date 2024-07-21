#include <stddef.h>
#include <stdio.h>
#include "search_algos.h"
/**
 * linear_search - A linear search algorithm that searches for a value
 * in an array of intergers.
 * @array: Pointer to the array of ints
 * @size: Number of elements in the array
 * @value: value to search for
 *
 * Return: position or -1 if not found
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
