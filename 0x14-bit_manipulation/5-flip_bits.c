#include "main.h"

/**
 * flip_bits - function that returns the number of bits you would
 * need to flip to get from one number to another.
 * @n: the first number
 * @m: the second number
 * Return: A number
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int j, cmp = 0;
	unsigned long int M;
	unsigned long int S = n ^ m;

	for (j = 63; j >= 0; j--)
	{
		M = S >> j;
		if (M & 1)
			cmp++;
	}

	return (cmp);
}
