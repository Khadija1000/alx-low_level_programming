#include "lists.h"

/**
 * insert_nodeint_at_index - function that inserts a new node at
 * a given position.
 * @head: A pointer.
 * @idx: An index - indices start at 0.
 * @n: An integer.
 * Return: the address of the new node, or NULL if it failed
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int j;
	listint_t *NO;
	listint_t *M = *head;

	NO = malloc(sizeof(listint_t));
	if (!NO || !head)
		return (NULL);

	NO->n = n;
	NO->next = NULL;

	if (idx == 0)
	{
		NO->next = *head;
		*head = NO;
		return (NO);
	}

	for (j = 0; M && j < idx; j++)
	{
		if (j == idx - 1)
		{
			NO->next = M->next;
			M->next = NO;
			return (NO);
		}
		else
			M = M->next;
	}

	return (NULL);
}
