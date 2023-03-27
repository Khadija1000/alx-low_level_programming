#include "main.h"
#include <stdio.h>

/**
 * puts2 - function that prints every other character of a string, starting
 * with the first character, followed by a new line.
 * @str: the string
 * Return: void.
 */

void puts2(char *str)

{
	int c = 0, i = 0;

	while (str[i++])
	{
		c++;
	}
	for (i = 0; i <= c; i = i + 2)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
