#include "lists.h"

/**
 * free_listint2 - function that frees a list
 * @head: A pointer
 * Description: Sets the head to NULL.
 * Return: void
 */
void free_listint2(listint_t **head)
{
	listint_t *N;

	if (head == NULL)
		return;

	while (*head)
	{
		N = (*head)->next;
		free(*head);
		*head = N;
	}

	head = NULL;
}
