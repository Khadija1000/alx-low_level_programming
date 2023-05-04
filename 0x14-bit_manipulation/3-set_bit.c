#include "main.h"

/**
 * set_bit - function that sets the value of a bit to 1 at a given
 * index.
 * @n: A pointer
 * @index: An index
 * Return: 1 if succedded, -1 if occured
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = ((1UL << index) | *n);
	return (1);
}
