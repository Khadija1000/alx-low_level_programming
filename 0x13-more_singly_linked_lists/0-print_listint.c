#include "lists.h"

/**
 * print_listint - function that prints all the elements of a list.
 * @h: the linked list
 * Return: a number
 */

size_t print_listint(const listint_t *h)
{
	size_t NO = 0;

	while (h)
	{
		printf("%d\n", h->n);
		NO++;
		h = h->next;
	}

	return (NO);
}
