#include "main.h"
#include <stdlib.h>
/**
 * create_array - creates an array of chars
 * @size: Size of array
 * @c: character
 * Return: pointer or null
 */

char *create_array(unsigned int size, char c)
{
	char *b;
	unsigned int p;

	if (size == 0)
	{
		return (NULL);
	}
	b = (char *) malloc(size * sizeof(c));
	if (b == 0)
	{
		return (NULL);
	}
		else
	{
		p = 0;
		while (p < size)
		{
			*(b + p) = c;
			p++;
		}
		return (b);
	}
}
