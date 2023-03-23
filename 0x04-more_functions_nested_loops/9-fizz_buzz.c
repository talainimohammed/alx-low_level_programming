#include <stdio.h>

/**
 * main - print fizz buzz numbers
 *
 * return: 0 value
 **/
int main(void)
{
	int i, k, l;

	for (i = 1; i <= 100; i++)
	{
		k = i % 3;
		l = i % 5;
		if (k == 0 && l == 0)
		{
			printf("FizzBuzz ");
		}
		else if (k == 0)
		{
			printf("Fizz ");
		}
		else if (l == 0)
		{
			printf("Buzz");
		}
		else
		{
			printf("%d ", i);
		}
	}
	printf("\n");
	return (0);
}
