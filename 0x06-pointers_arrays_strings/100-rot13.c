#include "main.h"

/**
 * rot13 - fonction that encodes a string into rot13.
 * @n: imput value
 * Return: char
 */

char *rot13(char *n)
{
	int i, j;
	char s1[] = "ABCDEFGHIGKLMNOPQRSTUVWXYZabcdefghigklmnopqrstuvwxyz";
	char s2[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (i = 0; n[i] != '\0'; i++)
	{
		for (j = 0; j < 52; j++)
		{
			if (n[i] == s1[j])
			{
				n[i] = s2[j];
				break;
			}
		}
	}
	return (n);
}
