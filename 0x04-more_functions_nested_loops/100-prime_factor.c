#include <stdio.h>
#include <math.h>

/**
 * main - Prints the largest prime factor of the number 612852475143
 * Return: Always 0 (Success)
 */

int main(void)

{
	long x, m;
	long n = 612852475143;
	double s = sqrt(n);

	for (x = 1; x <= s; x++)
	{
	if (n % x == 0)
	{
	m = n / x;
	}
	}
	printf("%ld\n", m);
	return (0);
}
