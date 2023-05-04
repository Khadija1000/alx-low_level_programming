#include "main.h"

/**
 * get_endianness - function that checks the endianness.
 * Return: 0 for big, 1 if little endian
 */
int get_endianness(void)
{
	unsigned int h = 1;
	char *c = (char *) &h;

	return (*c);
}
