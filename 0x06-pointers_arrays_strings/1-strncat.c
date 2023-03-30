#include "main.h"

/**
 * _strncat - function that concatenates two strings.
 * @dest: input value
 * @src: input value
 * @n: input value
 * Return: dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int i = 0, l = 0;

	while (dest[i++])
	{
		l++;
	}
	for (i = 0; src[i] && i < n; i++)
	{
		dest[l++] = src[i];
	}
	return (dest);
}
