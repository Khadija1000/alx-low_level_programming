#include "lists.h"

/**
 * free_listint_safe - function that frees a list.
 * @h: pointer
 * Return: A number.
 */
size_t free_listint_safe(listint_t **h)
{
	size_t AL = 0;
	int AD;
	listint_t *cmp;

	if (!h || !*h)
		return (0);

	while (*h)
	{
		AD = *h - (*h)->next;
		if (AD > 0)
		{
			cmp = (*h)->next;
			free(*h);
			*h = cmp;
			AL++;
		}
		else
		{
			free(*h);
			*h = NULL;
			AL++;
			break;
		}
	}

	*h = NULL;

	return (AL);
}
