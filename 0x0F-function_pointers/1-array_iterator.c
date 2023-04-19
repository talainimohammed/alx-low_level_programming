#include <stddef.h>
#include "function_pointers.h"
/**
 * array_iterator - function that executes function
 * @array: array
 * @size: size of array
 * @action: pointer to function 
 *
 * Return: void
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int j;

	if (array && size > 0 && action)
	{
		for (j = 0; j < size; j++)
		{
			(*action)(array[j]);
		}
	}
}
