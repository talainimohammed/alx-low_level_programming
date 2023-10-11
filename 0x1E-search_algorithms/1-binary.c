#include "search_algos.h"

/**
 * binary_search - function that searches for a value in a sorted array
 * Author: Talaini
 * @array: the list to search through
 * @size: length of (number of elements in) the array
 * @value: the value to search for
 *
 * Return: the index of first value match, -1 if not present or array is NULL
 */
int binary_search(int *array, size_t size, int value)
{
	size_t j, midlepoint, first = 0, last = size - 1;

	if (array == NULL || size == 0)
		return (-1);

	while (first <= last)
	{
		printf("Searching in array: %d", array[first]);
		for (j = first + 1; j <= last; j++)
			printf(", %d", array[j]);
		printf("\n");

		midlepoint = (first + last) / 2;

		if (value == array[midlepoint])
			return (midlepoint);
		else if (value > array[midlepoint])
			first = midlepoint + 1;
		else
			last = midlepoint - 1;
	}

	return (-1);
}
