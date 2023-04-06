#include "main.h"
/**
 * _memcpy - a function that copies memory area
 * @dest: stored source
 * @src: copied source
 * @n: bytes from memory area
 *
 * Return: dest value
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	int j = 0;
	int i = n;

	for (; j < i; j++)
	{
		dest[j] = src[j];
		n--;
	}
	return (dest);
}
