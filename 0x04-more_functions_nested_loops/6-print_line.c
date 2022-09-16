#include "main.h"
/**
 * print_line - fxn for printing lines
 * @n: Number of lines to print
 *
 */
void print_line(int n)
{
	int i;

	for (i = 0; i < n; i++)
		putchar('_');
	putchar('\n');
}
