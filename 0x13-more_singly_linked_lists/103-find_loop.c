#include "lists.h"

/**
 * find_listint_loop - function that finds the loop in a linked list
 * @head: A pointer.
 * Return: The address of the node where the loop starts, or NULL
 * if there is no loop
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *NS = head;
	listint_t *NF = head;

	if (!head)
		return (NULL);

	while (NS && NF && NF->next)
	{
		NF = NF->next->next;
		NS = NS->next;
		if (NF == NS)
		{
			NS = head;
			while (NS != NF)
			{
				NS = NS->next;
				NF = NF->next;
			}
			return (NF);
		}
	}

	return (NULL);
}
