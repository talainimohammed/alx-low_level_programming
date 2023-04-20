#include "variadic_functions.h"

/**
 * print_numbers - prints numbers.
 * @separator: spliter.
 * @n: number of integers.
 *
 * Return: no return.
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list paramlist;
	unsigned int j;

	va_start(paramlist, n);

	for (j = 0; j < n; j++)
	{
		printf("%d", va_arg(paramlist, int));
		if (separator && j < n - 1)
			printf("%s", separator);
	}

	printf("\n");
	va_end(paramlist);
}
