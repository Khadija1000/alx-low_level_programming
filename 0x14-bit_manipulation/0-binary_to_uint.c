#include "main.h"

/**
 * binary_to_uint - function that converts a binary number to an
 * unsigned int.
 * @b: A string
 * Return: converted number
 */
unsigned int binary_to_uint(const char *b)
{
	int j;
	unsigned int v = 0;

	if (!b)
	{
		return (0);
	}
	for (j = 0; b[j]; j++)
	{
		if (b[j] < '0' || b[j] > '1')
			return (0);
		v = 2 * v + (b[j] - '0');
	}

	return (v);
}
