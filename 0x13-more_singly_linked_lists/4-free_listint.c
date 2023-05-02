#include "lists.h"

/**
 * free_listint - function that frees a list
 * @head: A pointer to
 * Return: void.
 */
void free_listint(listint_t *head)
{
	listint_t *N;

	while (head)
	{
		N = head->next;
		free(head);
		head = N;
	}
}
