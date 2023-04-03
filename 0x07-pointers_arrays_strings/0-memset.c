#include "main.h"
/**
 * _memset - fill a block of memory
 * @s: star address memory
 * @b: the constant byte
 * @n: bytes of the memory area pointed
 *
 * Return: s value
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int j = 0;

	while (j < n)
	{
		*(s + j) = b;
		j++;
	}
	return (s);
}
