#include "lists.h"

/**
 * reverse_listint - function that reverses a linked list.
 * @head: A pointer.
 * Return: A pointer.
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *A = NULL;
	listint_t *B = NULL;

	while (*head)
	{
		A = (*head)->next
		(*head)-next = B;
		B = *head;
		*head = A;
	}

	*head = B;

	return (*head);
}
