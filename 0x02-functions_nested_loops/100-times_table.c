#include "main.h"
#include <stdio.h>

/**
 * print_times_table - prints the  times table.
 *
 * @n : int value
 **/
void print_times_table(int n)
{
	if (n < 0 || n > 15) 
	{
    		return; // do not print anything if n is out of range
  	}

  	for (int i = 0; i <= n; i++) 
	{
    		for (int j = 0; j <= n; j++) 
		{
      			printf("%d ", i * j);
    		}
    	printf("\n");
  	}
}
