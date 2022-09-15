#include "main.h"
/**
 * print_diagonal - print diagonal line
 * @n: number of slashing
 *
 */
void print_diagonal(int n)
{
	char slash = '\\';
	int i, j;

	for (i = 0; i < n; i++)
	{
		for (j = 0; j < n; j++)
		{
			if (j == i)
				_putchar(slash);
			else
				_putchar(" ");
		}
		_putchar('\n');
	}
}
