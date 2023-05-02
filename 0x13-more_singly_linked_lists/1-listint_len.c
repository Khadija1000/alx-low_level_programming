#include "lists.h"

/**
 * listint_len - a function that returns the number of elements in
 * a linked list
 * @h: linked list
 * Return: number of nodes
 */
size_t listint_len(const listint_t *h)
{
	size_t Number = 0;

	while (h)
	{
		Number++;
		h = h->next;
	}

	return (Number);
}
