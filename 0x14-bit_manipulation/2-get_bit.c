#include "main.h"

/**
 * get_bit - function that returns the value of a bit at a given index.
 * @n: number
 * @index: index
 * Return: the value of the bit at index index or -1 if an error occured
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int v;

	if (index > 63)
	{
		return (-1);
	}

	v = (n >> index) & 1;

	return (v);
}
