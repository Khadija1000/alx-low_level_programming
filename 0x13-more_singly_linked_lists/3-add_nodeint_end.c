#include "lists.h"

/**
 * add_nodeint_end - function that adds a new node at the end of a lis
 * @head: A pointer
 * @n: an integer
 * Return: the address of the new element, or NULL if it failed
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *cmp;
	listint_t *l;

	cmp = malloc(sizeof(listint_t));
	if (cmp == NULL)
		return (NULL);

	cmp->n = n;
	cmp->next = NULL;

	if (*head == NULL)
		*head = cmp;

	else
	{
		l = *head;
		while (l->next != NULL)
			l = l->next;
		l->next = cmp;
	}

	return (*head);
}
