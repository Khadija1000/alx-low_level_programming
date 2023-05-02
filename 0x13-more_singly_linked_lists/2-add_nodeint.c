#include "lists.h"

/**
 * add_nodeint - function that adds a new node at the beginning of alist
 * @head: pointer
 * @n: data to insert in
 * Return: the address of the new element, or NULL if it failed
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *cmp;

	cmp = malloc(sizeof(listint_t));
	if(!cmp)
	{
		return (NULL);
	}
	cmp->n = n;
	cmp->next = *head;
	*head = cmp;

	return (cmp);
}
