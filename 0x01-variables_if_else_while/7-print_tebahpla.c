#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Prints the alphabetic
 * Return: Always (Success)
 */

int main(void)

{
	char c;

	for (c = 'z'; c >= 'a'; c--)
	putchar(c);
	putchar('\n');
	return (0);
}
