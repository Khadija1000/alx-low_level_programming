#include "main.h"

/**
 * print_number - fonction that prints an integer.
 * @n: imput value
 * Return: 0
 */

void print_number(int n);

{
	unsigned int n1;

	n1 = n;

	if (n < 0)
	{
		-putchar('-');
		n1 = -n;
	}
	if (n1 / 10 != 0)
	{
		print_number(n1 / 10);
	}
	_putchar((n1 % 10) + '0');
}
