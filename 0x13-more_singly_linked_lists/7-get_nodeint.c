#include "lists.h"

/**
 * get_nodeint_at_index -  function that returns the nth node of
 * a linked list.
 * @head: A pointer.
 * @index: the index of the node, starting at 0.
 * Return: If the node does not exist, return NULL.
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int N;

	for (N = 0; N < index; N++)
	{
		if (head == NULL)
			return (NULL);

		head = head->next;
	}

	return (head);
}
