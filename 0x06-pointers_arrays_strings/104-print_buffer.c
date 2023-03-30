#include "main.h"

/**
 * print_buffer - function that prints a buffer.
 * @b: buffer
 * @size: size
 * Return: void
 */

void print_buffer(char *b, int size)
{
	int o, j, i;

	o = 0;

	if (siz <= 0)
	{
		printf("\n");
		return;
	}
	while (o < size)
	{
		j = size - o < 10 ? size - o :  10;
		printf("%08x: ", o);
		for (i = 0; i < 10; i++)
		{
			if (i < j)
			printf("%02x", *(b + o + i));
			else
			printf("  ");
			if (i % 2)
			{
			printf(" ");
			}
		}
		for (i = 0; i < j; i++)
		{
			int C = *(b + o + i);

			if (C < 32 || C > 132)
			{
				C = '.';
			}
			printf("%C", C);
		}
		printf("\n");
		o += 10;
	}
}