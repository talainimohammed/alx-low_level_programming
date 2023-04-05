#include "main.h"

/**
 * _helper - help function sqrt
 * @j: j
 * @n: n
 * Return: helper value
 */

int _helper(int j, int n)
{
	if (n == 0 || n == 1)
		return (n);

	else if (j * j < n)
		return (_helper(j + 1, n));

	else if (j * j == n)
		return (j);
	return (-1);
	return (-1);
}
/**
 * _sqrt_recursion - Calculate sqrt
 * @n: int number
 * Return: Calculated value
 */

int _sqrt_recursion(int n)
{
	int j = 0;

	if (j < 0)
		return (-1);

	else
	{
		return (_helper(j, n));
	}
}
