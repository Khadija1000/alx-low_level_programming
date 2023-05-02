#include "lists.h"

/**
 * sum_listint - function that returns the sum of all the data (n)
 * of a linked list.
 * @head: A pointer.
 * Return: If the list is empty return 0
 */
int sum_listint(listint_t *head)
{
	int S = 0;

	while (head)
	{
		S += head->n;
		head = head->next;
	}

	return (S);
}
