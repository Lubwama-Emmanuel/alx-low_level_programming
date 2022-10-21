#include"main.h"
/**
 * print_diagonal - print diagonal line
 * @n: number of slashing
 *
 */
void print_diagonal(int n)
{
	int postn, space;

	if (n <= 0)
		putchar('\n');
	else
	{
		for (postn = 1; postn <= n; ++postn)
		{
			for (space = 1; space <= postn; ++space)
				putchar(' ');
			putchar(92);
			putchar('\n');
		}
	}
}
