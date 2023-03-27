#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
	int i, j, n = 10;

	if (n <= 0)
	{
		printf("\n");
	}
	else
	{
		for (i = 0; i < n; i++)
		{
			for (j = 0; j <= i; j++)
			{
				if (i == j)
				{
					printf("#");
					printf("\n");
				}
				else
					printf(" ");
			}            				
		}
	}
	return (0);
}
