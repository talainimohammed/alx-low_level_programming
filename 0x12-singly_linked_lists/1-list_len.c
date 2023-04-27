#include "lists.h"
/**
 * list_len - returns the nb elements in a list.
 * @h: singly linked list.
 * Return: nb elements in the list.
 */

size_t list_len(const list_t *h)
{
	size_t nbelement;

	nbelement = 0;
	while (h != NULL)
	{
		h = h->next;
		nbelement++;
	}
	return (nbelement);
}
