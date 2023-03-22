#include "main.h"
#include <stdio.h>

/**
 * print_times_table - prints the  times table.
 *
 * @n : int value
 **/
int main(void)
{
	int sum = 0;
	
	for (int i = 0; i < 1024; i++)
	{
		if (i % 3 == 0 || i % 5 == 0)
		{
			sum += i;
		}
	}
	printf("%d\n", sum);
	return 0;
}
