#include <unistd.h>
#include "main.h"
/**
 * main -  utilisation of _putchar function
 *
 * Return: value is  0.
 **/
int main(void)
{
	char a[] = "_putchar";
	int i;

	for (i = 0; i < 8; i++)
	{
		_putchar (a[i]);
	}
	return (0);
}
