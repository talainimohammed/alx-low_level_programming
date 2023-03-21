#include "main.h"
/**
 * main - Entry point
 * lets print _putchar
 * Return: 0 (SUCCESS)
 */
int main(void)
{
	char a[] = "_putchar";
	int i;

	for (i = 0; i < 8; i++)
	{
		_putchar (a[i]);
	}
	_putchar ('\n');
	return (0);
}
