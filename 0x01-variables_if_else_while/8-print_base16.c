#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - A program that prints all single digit numbers
 * Return: Always 0 (Success)
 */
int main(void)

{
	int d;
	char c;

	for (d = '0'; d <= '9'; d++)
	putchar(d);

	for (c = 'a'; c <= 'f'; c++)
	putchar(c);
	putchar('\n');

	return (0);
}
