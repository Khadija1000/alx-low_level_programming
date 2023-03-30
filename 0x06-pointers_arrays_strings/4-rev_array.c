#include "main.h"

/**
 * reverse_array - function that reverses the content of an array of integers.
 * @a: the array
 * @n: number of element of the array
 * Return: void
 */

void reverse_array(int *a, int n)

{
	int cmp = 0, i = 0;

	for (i = n - 1; i >= n / 2; i--)
	{
	cmp = a[i];
	a[i] = a[n - i - 1];
	a[n - i - 1] = cmp;
	}
}
