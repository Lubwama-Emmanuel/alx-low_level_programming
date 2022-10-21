#include "variadic_functions.h"
/**
 * print_numbers - a fxn that prints numbers, follwed by a new line
 *
 * @separator: pointer to constant separator
 * @n: start of input variables
 *
 * Return: nothing
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int index;
	va_list ap;

	va_start(ap, n);

	for (index = 0; index < n; index++)
	{
		printf("%d", va_arg(ap, int));
		if (separator && index != n - 1)
			printf("%s", separator);
	}
	/* clean up */
	va_end(ap);
	printf("\n");
}
