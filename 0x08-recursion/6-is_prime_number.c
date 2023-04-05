#include "main.h"

/**
 * evaluate_prime - test prime
 * @num: num
 * @i: number to iterate
 * Return: Calculated result
 */

int evaluate_prime(int num, int i)
{
	if (i == num - 1)
	{
		return (1);
	}

	else if (num % i == 0)
	{
		return (0);
	}

	if (num % i != 0)
	{
		return (evaluate_prime(num, i + 1));
	}
	return (0);
}
/**
 * is_prime_number - is prime or not
 * @n: number
 * Return: return 1 prime - return 0 not prime
 */
int is_prime_number(int n)
{
	int i;

	i = 2;

	if (n < 2)
	{
		return (0);
	}
	if (n == 2)
	{
		return (1);
	}

	return (evaluate_prime(n, i));
}
