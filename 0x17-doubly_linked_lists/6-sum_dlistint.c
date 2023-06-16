#include <stdlib.h>
#include "lists.h"

/**
 * sum_dlistint - function that returns the sum of all the data (n)
 * of a dlinked list.
 * @head: A pointer.
 * Return: If the list is empty return 0
 */
int sum_dlistint(dlistint_t *head)
{
	int S = 0;

	while (head)
	{
		S += head->n;
		head = head->next;
	}

	return (S);
}
