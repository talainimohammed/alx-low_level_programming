#include "main.h"

/**
  * _atoi - convert str to int
  * @s: the string
  *
  * Return: int value
  */
int _atoi(char *s)
{
	unsigned int n = 0;
	int i = 0;
	int sign = 1;

	while (*(s + i))
	{
		if (*(s + i) == '-')
			sign *= -1;
		else if (*(s + i) >= '0' && *(s + i) <= '9')
			n = (n * 10) + (*(s + i) - '0');
		else if (n > 0)
			break;
		i++;
	}
	return (n * sign);
}
