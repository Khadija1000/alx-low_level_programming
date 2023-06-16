#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_dnodeint - adds a new node at the beginning of a dlinked list
 * @head: double pointer to the dlistint_t list
 * @n: new string to add in the node
 * Return: the address of the new element, or NULL if it failed
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;


	new = malloc(sizeof(dlistint_t));
	if (!new)
		return (NULL);

	new->n = n;
	new->prev = NULL;
	new->next = (*head);

	if ((*head) != NULL)
	(*head)->prev = new;

	*head = new;

	return (*head);
}
