#include "lists.h"

/**
 * print_dlistint - prints all the elements.
 * @h: pointer to the head of the list
 *
 * Return: nb of nodes
 */

size_t print_dlistint(const dlistint_t *h)
{
	int c = 0;

	if (h == NULL)
		return (c);

	while (h->prev != NULL)
		h = h->prev;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		c++;
	}

	return (c);
}
