#include "variadic_functions.h"
#include <stdarg.h>
/**
 * sum_them_all: a function that returns the sum of all its parameters
 * @n: parameter
 * @...:a variable
 * Return: if n==0 - 0 otherwise the sum of all parameters
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list ap;
	unsigned i, sum = 0;

	va_start(ap, n);

	for (i = 0; i < n; i++)
	{
		sum = sum + va_arg(ap, int);
	}
	
	va_end(ap);
	
	return(sum);
}
