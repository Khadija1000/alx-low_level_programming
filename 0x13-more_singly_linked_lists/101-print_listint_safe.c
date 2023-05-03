#include "lists.h"
#include <stdio.h>

size_t looped_listint_len(const listint_t *head);
size_t print_listint_safe(const listint_t *head);

/**
 * looped_listint_len - A function that counts the unique nodes.
 * @head: A pointer
 * Return: the number of nodes in the list.
 */
size_t looped_listint_len(const listint_t *head)
{
	const listint_t *AT, *AH;
	size_t NO = 1;

	if (head == NULL || head->next == NULL)
		return (0);

	AT = head->next;
	AH = (head->next)->next;

	while (AH)
	{
		if (AT == AH)
		{
			AT = head;
			while (AT != AH)
			{
				NO++;
				AT = AT->next;
				AH = AH->next;
			}

			AT = AT->next;
			while (AT != AH)
			{
				NO++;
				AT = AT->next;
			}

			return (NO);
		}

		AT = AT->next;
		AH = (AH->next)->next;
	}

	return (0);
}

/**
 * print_listint_safe -  function that prints a linked list.
 * @head: A pointer
 * Return: a number.
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t NO, i = 0;

	NO = looped_listint_len(head);

	if (NO == 0)
	{
		for (; head != NULL; NO++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}
	}

	else
	{
		for (i = 0; i < NO; i++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}

		printf("-> [%p] %d\n", (void *)head, head->n);
	}

	return (NO);
}
