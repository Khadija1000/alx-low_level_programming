#include "main.h"

/**
 * _strncpy - function that copies a string.
 * @dest: input value
 * @src: input value
 * @n: the maximum number of bytes to copie from src
 * Return: A pointer to the resulting string dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int l = 0, i = 0;

	while (src[i++])
	{
		l++;
	}
	for (i = 0; src[i] && i < n; i++)
	{
	dest[i] = src[i];
	}
	for (i = l; i < n; i++)
	{
	dest[i] = '\0';
	}
	return (dest);
}
