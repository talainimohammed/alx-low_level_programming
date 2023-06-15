#include "lists.h"

/**
 * free_dlistint - frees a dlistint_t.
 * @head: pointer to the head of the list.
 */

void free_dlistint(dlistint_t *head)
{
	while (head != NULL)
	{
		dlistint_t *n = head->next;

		free(head);
		head = n;
	}
}
