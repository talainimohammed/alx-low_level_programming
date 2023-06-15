#include "lists.h"

/**
 *  sum_dlistint - returns the sum
 * the data (n) of a dlistint_t linked list.
 * @head: double pointer to the head of the list
 *
 * Return: if empty, return 0
 */

int sum_dlistint(dlistint_t *head)
{
	int s = 0;
	dlistint_t *j;

	for (j = head; j != NULL; j = j->next)
	{
		s += j->n;
	}

	return (s);
}
