#include "lists.h"

/**
 * pop_listint - function that deletes the head node of a linked
 * list, and returns the head node’s data (n).
 * @head: A pointer
 * Return: If the linked list is empty return 0.
 */
int pop_listint(listint_t **head)
{
	listint_t *NO;
	int M;

	if (*head == NULL)
	{
		return (0);
	}

	NO = *head;
	M = (*head)->n;
	*head = (*head)->next;

	free(NO);

	return (M);
}
