#include "lists.h"
#include <stdio.h>

/**
 * print_listint - function that prints all the elements of a list
 * @h: A pointer to the head of the list_t list.
 *
 * Return: The number of nodes in the list_t list.
 */
size_t print_listint(const listint_t *h)
{
	size_t no = 0;

	while (h)
	{
		no++;
		printf("%d\n", h->n);
		h = h->next;
	}

	return (no);
}
