#include <math.h>
#include <stdio.h>
#include "search_algos.h"

/**
 * jump_search - Searches for a value in a sorted array of integers using jump search
 * @array: Pointer to the first element of the array to search in
 * @size: Number of elements in the array
 * @value: Value to search for
 * 
 * Return: First index where value is located, or -1 if value not found or array is NULL
 */

int jump_search(int *array, size_t size, int value)
{
	size_t step, prev, i;

	if (array == NULL || size == 0)
		return (-1);

	step = sqrt(size);
	prev = 0;

	while (prev < size && array[prev] < value)
    {
	printf("Value checked array[%lu] = [%d]\n", prev, array[prev]);
	if (array[prev] == value)
		return (prev);
	prev += step;
    }

	i = prev - step;
	printf("Value found between indexes [%lu] and [%lu]\n", i, prev);
	while (i < size && i <= prev && array[i] <= value)
    {
	printf("Value checked array[%lu] = [%d]\n", i, array[i]);
	
	if (array[i] == value)
		return (i);
	i++;
    }
	
	return (-1);
}
