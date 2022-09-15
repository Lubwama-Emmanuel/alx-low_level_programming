#include "main.h"
/**
 * print_triangle - prints a right angled triangle
 * @size: size of triangle to be printed
 *
 */
void print_triangle(int size)
{
	char star = '*';
	int i, j;

	for (i = 1; i < size; i++)
	{
		for (j = i; j < size; j++)
		{
			_putchar(' ');
		}
		for (j = 1; j <= i; j++)
		{
			_putchar(star);
		}
		_putchar('\n');
	}
}
