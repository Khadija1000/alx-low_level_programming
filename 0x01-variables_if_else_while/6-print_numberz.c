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

	for (d = '0'; d < 10; d++)
	putchar(d);
	putchar('\n');

	return (0);
}
