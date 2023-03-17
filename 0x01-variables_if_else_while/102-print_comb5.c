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

int i, j, d1, d2, d3, d4;

for (i = 0; i < 100; i++) 
{
	for (j = i; j < 100; j++) 
	{
		d1 = i / 10;
		d2 = i % 10;
		d3 = j / 10;
		d4 = j % 10;
		putchar(d1 + '0');
		putchar(d2 + '0');
		putchar(' ');
		putchar(d3 + '0');
		putchar(d4 + '0');
		if (i != 99 || j != 99) 
		{
			putchar(',');
			putchar(' ');
		}
	}
}
putchar('\n');
return (0);
}
