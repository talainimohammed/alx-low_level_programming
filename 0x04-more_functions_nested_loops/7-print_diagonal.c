#include "main.h"

/**
 * print_diagonal - print diagonal
 *
 * @n: lenght diagonal
 **/
void print_diagonal(int n)
{
	int i, j;

	if (n == 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 0; i < n; i++)
		{
			for (j = 0; j < i; j++)
			{
				_putchar(' ');
				if (i == j)
				{
					_putchar(92);
					_putchar('\n');
				}
			}
		}
	}
}
