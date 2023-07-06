#include "hash_tables.h"

/**
 * hash_djb2 - Hash function, takes a string and turns it into a hash number
 * @str: the string, a constant value unrepeated in the hash table
 *
 * Return: The hash number
 */
unsigned long int hash_djb2(const unsigned char *str)
{
	unsigned long int hsh;
	int c;

	hsh = 5381;
	while ((c = *str++))
	{
		hsh = ((hsh << 5) + hsh) + c; /* hsh * 33 + c */
	}
	return (hsh);
}
