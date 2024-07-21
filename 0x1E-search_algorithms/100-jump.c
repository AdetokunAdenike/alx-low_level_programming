#include <stdio.h>
#include <math.h>
#include "search_algos.h"

/**
 * jump_search - A Jump search algorithm
 * @array: Pointer to the first element of the array to search in
 * @size: Size of array
 * @value: Value to search for
 * Return: Index where value is located, or -1 if not present
 *
 */

int jump_search(int *array, size_t size, int value)
{
	size_t step, prev, start, i;

	if (array == NULL || size == 0)
		return (-1);

	step = sqrt(size);
	prev = 0;

	while (prev < size && array[prev] < value) {
		printf("Value checked array[%lu] = [%d]\n", prev, array[prev]);
		prev += step;
	}

	start = (prev < size) ? prev - step : 0;

	printf("Value found between indexes [%lu] and [%lu]\n", start, prev);

	for (i = start; i < size && i <= prev; i++) {
		printf("Value checked array[%lu] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}

	return (-1);
}
