#include "main.h"

/**
 * print_square - print square
 *
 * @size: lenght diagonal
 **/
void print_square(int size)
{
	int i, j;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 0; i < n; i++)
		{
			for (j = 0; j < n; j++)
			{
				_putchar(35);
			}
            _putchar('\n');
		}
	}
}
