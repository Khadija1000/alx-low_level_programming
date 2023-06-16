#include <stdlib.h>
#include "lists.h"

/**
 * insert_dnodeint_at_index - function that inserts a new node at
 * a given position.
 * @h: A pointer.
 * @idx: An index - indices start at 0.
 * @n: An integer.
 * Return: the address of the new node, or NULL if it failed
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int j;
	dlistint_t *NO;
	dlistint_t *M = *h;

	NO = malloc(sizeof(dlistint_t));
	if (!NO || !h)
		return (NULL);

	NO->n = n;
	NO->next = NULL;

	if (idx == 0)
	{
		NO->next = *h;
		*h = NO;
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
