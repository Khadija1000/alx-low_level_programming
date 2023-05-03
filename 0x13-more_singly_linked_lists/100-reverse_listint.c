#include "lists.h"

/**
 * reverse_listint - function that reverses a linked list.
 * @head: A pointer.
 * Return: A pointer.
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *A, *B;

	if (head == NULL || *head == NULL)
		return (NULL);

	B = NULL;

	while ((*head)->next != NULL)
	{
		A = (*head)->next;
		(*head)->next = B;
		B = *head;
		*head = A;
	}

	(*head)->next = B;

	return (*head);
}
