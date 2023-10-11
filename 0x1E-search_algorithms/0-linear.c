#include "search_algos.h"

/**
 * linear_search - function that searches for a value in an array
 * Author: Talaini
 * @array: the list to search through
 * @size: length of (number of elements in) the array
 * @value: the value to search for
 *
 * Return: the index of first value match, -1 if not present or array is NULL
 */
int linear_search(int *array, size_t size, int value)
{
	size_t j;

	if (array == NULL || size == 0)
		return (-1);

	for (j = 0; j < size; j++)
	{
		printf("Value checked array[%lu] = [%d]\n", j, array[j]);
		if (array[j] == value)
			return (j);
	}
	return (-1);
}
