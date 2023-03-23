#include "main.h"

/**
 * _isupper - function that checks for uppercase character
 * @c: The caractere checked
 * Return: 1 for upper letter or 0 otherwise
 */

int _isupper(int c)

{
	if (c >= 65 && c <= 90)
	{
	return (1);
	}
	return (0);
}
