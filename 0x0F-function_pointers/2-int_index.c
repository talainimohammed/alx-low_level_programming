#include "function_pointers.h"
/**
 * int_index - searches for an integer
 * @array: array of int
 * @size: number of element
 * @cmp: pointer to function
 *
 * Return: index of first element
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int j, r;

	r = -1;
	if (array && cmp)
	{
		if (size <= 0)
		{
			return (r);
		}
		for (j = 0; j < size; j++)
		{
			cmp(array[j]);
			if (cmp(array[j]) > 0)
			{
				r = j;
				break;
			}
			if ((cmp(array[j]) == (-1)))
			{
				return (r);
			}
		}
	}
	return (r);
}
