#include "variadic_functions.h"

/**
 * sum_them_all - the sum all parameters.
 * @n: number of the arguments.
 *
 * Return: sum.
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list paramlist;
	unsigned int j;
	int sum = 0;

	if (n == 0)
		return (0);

	va_start(paramlist, n);

	for (j = 0; j < n; j++)
		sum += va_arg(paramlist, int);

	va_end(paramlist);

	return (sum);
}
