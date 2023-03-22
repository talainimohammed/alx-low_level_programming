#include "main.h"
#include <stdio.h>

/**
 * print_times_table - prints the  times table.
 *
 * @n : int value
 **/
void print_times_table(int n)
{
	int row;
	int column;
	int product;
	
	if (n < 0 || n > 15)
	{
		_putchar(' ');
	}
	for (row = 0; row <= n; row++)
	{
		for (column = 0; column <= n; column++)
		{
			product = (row * column);

			if (column == 0)
			{
				_putchar('0' + product);
			}
			else if (product <= 9)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar(' ');
				printf("%d", product);
			}
			else if (product > 9)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				printf("%d", product);
			}
			else if (product > 99)
			{
				_putchar(',');
				_putchar(' ');
				printf("%d", product);
			}
		}
		_putchar('\n');
	}
}
