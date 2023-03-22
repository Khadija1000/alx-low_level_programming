#include <stdio.h>

/**
 * main - Prints the first 98 Fibonacci numbers, starting with
 * 1 and 2, separeted by a comma followed by a space.
 * Return: Always 0.
 */

int main(void)

{
	int c;
	unsigned long f1 = 0, f2 = 1, s;
	unsigned long fh1, fh2, fh3, fh4;
	unsigned long h1, h2;

	for (c = 0; c < 92; c++)
	{
	s = f1 + f2;
	printf("%lu, ", s);
	f1 = f2;
	f2 = s;
	}
	fh1 = f1 / 10000000000;
	fh3 = f2 / 10000000000;
	fh2 = f1 % 10000000000;
	fh4 = f2 % 10000000000;
	for (c = 93; c < 99; c++)
	{
	h1 = fh1 + fh3;
	h2 = fh2 + fh4;
	if (fh3 + fh4 > 9999999999)
	{
	h1 += 1;
	h2 %= 10000000000;
	}
	printf("%lu%lu", h1, h2);
	if (c != 98)
	printf(", ");
	fh1 = fh3;
	fh2 = fh4;
	fh3 = h1;
	fh4 = h2;
	}
	printf("\n");
	return (0);
}
