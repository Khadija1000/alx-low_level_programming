#include "lists.h"

/**
 * add_nodeint - function that adds a new node at the beginning of a list
 * @head: A pointer to the address of the head of the list.
 * @n: an integer.
 * Return: the address of the new element, or NULL if it failed.
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *cmp;

	cmp = malloc(sizeof(listint_t));
	if (cmp == NULL)
	{
		return (NULL);
	}
	cmp->n = n;
	cmp->next = *head;

	*head = cmp;

	return (cmp);
}
