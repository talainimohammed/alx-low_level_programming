#include <stdlib.h>
#include <time.h>
#include<stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int a, j;

	for (a = 0; a < 10; a++)
	{
		for (j = a + 1; j < 10; j++)
		{
				putchar(a + '0');
				putchar(',');
				putchar(' ');
				putchar(j + '0');
		}
	}
	putchar('\n');
	return (0);
}
