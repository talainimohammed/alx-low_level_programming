#include "variadic_functions.h"

/**
 * print_strings - prints strings.
 * @separator: printed spliter
 * @n: number of strings.
 *
 * Return: no return.
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list paramlist;
	unsigned int j;
	char *str;

	va_start(paramlist, n);

	for (j = 0; j < n; j++)
	{
		str = va_arg(paramlist, char *);

		if (str)
			printf("%s", str);
		else
			printf("(nil)");

		if (j < n - 1)
			if (separator)
				printf("%s", separator);
	}

	printf("\n");
	va_end(paramlist);
}
