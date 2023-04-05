#include "main.h"
/**
 * factorial - Factorial of a number
 * @n: a number
 * Return: calculated result
 */

int factorial(int n)
{
	if (n == 0)
		return (1);

	else if (n < 0)
		return (-1);
	else
		return (n * factorial(n - 1));
}
