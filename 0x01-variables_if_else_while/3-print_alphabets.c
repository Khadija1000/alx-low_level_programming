#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - A program that prints the alphabet
 * * Return: Always (Success)
 */

int main(void)

{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	putchar(c);

	for (c = 'A'; c <= 'Z'; c++)
	putchar(c);
	putchar('\n');

	return (0);
}
