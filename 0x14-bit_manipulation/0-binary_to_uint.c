#include "main.h"

/**
 * binary_to_uint - function  converts a binary number to an
 * unsigned int.
 * @b: binary number.
 *
 * Return: unsigned int.
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int i;
	int l, basetwo;

	if (!b)
		return (0);

	i = 0;

	for (l = 0; b[l] != '\0'; l++)
		;

	for (l--, basetwo = 1; l >= 0; l--, basetwo *= 2)
	{
		if (b[l] != '0' && b[l] != '1')
		{
			return (0);
		}

		if (b[l] & 1)
		{
			i += basetwo;
		}
	}

	return (i);
}
