#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - prints two diagonal of a matrix
 * @a: pointer to array
 * @size: size of array
 * Return: void
 */
void print_diagsums(int *a, int size)
{
	int i, si1;
	unsigned int sDiag1, sDiag2;

	si1 = 0;
	sDiag1 = 0;
	sDiag2 = 0;

	si1 = (size * size) - 1;

	for (i = 0; i <= si1; i = i + (size + 1))
	{
		sDiag1 = sDiag1 + a[i];
	}
	for (i = (size - 1); i < si1; i = i + (size - 1))
	{
		sDiag2 = sDiag2 + a[i];
	}
	printf("%d, %d\n", sDiag1, sDiag2);
}
