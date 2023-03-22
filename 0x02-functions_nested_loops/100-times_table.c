#include "main.h"
#include <stdio.h>

/**
 * print_times_table - prints the  times table.
 *
 * @n : int value
 **/
void print_times_table(int n)
{
	int i, j;
	if (n < 0 || n > 15) 
	{
    		return;
  	}

  	for (i = 0; i <= n; i++) 
	{
    		for (j = 0; j <= n; j++) 
		{
      			printf("%d ", i * j);
    		}
    	printf("\n");
  	}
}
