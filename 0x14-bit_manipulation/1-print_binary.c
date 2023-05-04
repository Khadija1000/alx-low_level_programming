#include "main.h"

/**
 * print_binary - function that prints the binary representation
 * of a number.
 * @n: number
 * Return: void
 */
void print_binary(unsigned long int n)
{
	int j, cmp = 0;
	unsigned long int M;

	for (j = 63; j >= 0; j--)
	{
		M = n >> j;

		if (M & 1)
		{
			_putchar('1');
			cmp++;
		}
		else if (cmp)
			_putchar('0');
	}
	if (!cmp)
		_putchar('0');
}
