#include <stdio.h>
#include "lists.h"

/**
 * print_dlistint - a function that prints all the elements
 * of a dlistint_t list.
 * @h: pointer to the dlistint_t list to print
 *
 * Return: the number of nodes printed
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t s = 0;

	while (h)
	{
		printf("%d\n",  h->n);
		h = h->next;
		s++;
	}

	return (s);
}
