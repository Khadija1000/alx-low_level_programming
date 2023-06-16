#include <stdlib.h>
#include "lists.h"

/**
 * get_dnodeint_at_index - function that returns the nth node of
 * a dlistint_t linked list.
 * @head: A pointer.
 * @index: the index of the node, starting at 0.
 * Return: If the node does not exist, return NULL.
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i;

	for (i = 0; i < index; i++)
	{
		if (head == NULL)
			return (NULL);

		head = head->next;
	}

	return (head);
}
