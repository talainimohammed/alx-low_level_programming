#include <stdlib.h>
#include <time.h>
#include<stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char a[] = "abcdefghijklmnopqrstuvwxyz";
	int i;

	for( i = 0; i < 26; i++)
	{
		putchar(a[i]);
	}
	putchar('\n');
	return (0);
}
