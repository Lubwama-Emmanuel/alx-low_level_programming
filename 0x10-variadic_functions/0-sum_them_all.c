#include "variadic_functions.h"
/**
 * sum_them_all - variadic function that sums up a number
 *
 * @n: number of characters to sum up
 *
 * Return: returns sum of the numbers given
 */
int sum_them_all(const unsigned int n, ...)
{
	int sum = 0;
	unsigned int i;

	va_list ap;


	/* intialize the argument list from the start */
	va_start(ap, n);

	if (n == 0)
		return (0);
	/* iterate through all parameter values */
	for (i = 0; i < n; i++)
		sum += va_arg(ap, int);

	va_end(ap);
	return (sum);
}

