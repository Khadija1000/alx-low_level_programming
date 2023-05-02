#include "lists.h"

/**
 * delete_nodeint_at_index - function that deletes the node at
 * index of a linked list.
 * @head: A pointer.
 * @index: An index.
 * Return: 1 if Succeeded, or -1 if Failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *NO = *head;
	listint_t *M = NULL;
	unsigned int j = 0;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		free(NO);
		return (1);
	}

	while (j < index - 1)
	{
		if (!NO || !(NO->next))
			return (-1);
		NO = NO->next;
		j++;
	}


	M = NO->next;
	NO->next = M->next;
	free(M);

	return (1);
}
