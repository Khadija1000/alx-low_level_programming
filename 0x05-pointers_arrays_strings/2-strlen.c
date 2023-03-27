#include "main.h"
#include <stdio.h>

/**
 * _strlen - a faction that returns the length of a string
 * @s: the string
 * Return: the length.
 */

int _strlen(char *s)

{
	int l = 0;

	while (*s++)
	l++;
	return (l);
}
