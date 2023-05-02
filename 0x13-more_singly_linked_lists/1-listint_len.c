#include "lists.h"

/**
 * listint_len - function that returns the number of elements.
 * @h: a list.
 *
 * Return: nb nodes.
 */
size_t listint_len(const listint_t *h)
{
	size_t nbnodes = 0;

	while (h != NULL)
	{
		h = h->next;
		nbnodes++;
	}
	return (nbnodes);
}
