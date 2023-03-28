#include "main.h"
#include <stdio.h>

/**
 * puts_half - function that prints half of a string, followed by a new line.
 * with the first character, followed by a new line.
 * @str: the string
 * Return: void.
 */

void puts_half(char *str)

{
	int c = 0, i = 0;
	int n;

	while (str[i++])
	{
		c++;
	}
	if (c % 2 == 0)
	{
	for (i = c / 2; i < c; i++)
	{
		_putchar(str[i]);
	}
	}
	else
	{
		n = (c - 1) / 2;
		for (i = c - n; i < c; i++)
		{
			_putchar(str[i]);
		}
	}
	_putchar('\n');
}
