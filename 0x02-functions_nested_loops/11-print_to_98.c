#include "main.h"
/**
 * print_to_98 - prints from n to 98
 * @n: starting number
 */
void print_to_98(int n)
{
	if (n > 0 && n < 98)
	{
		for (i = n; i <= 98; i++)
			_putchar(i);
	} else if (n > 98)
	{
		for (i = n; i >= 98; i--)
			_putchar(i);
	} else
	{
		for (i = n; i <= 98; i++)
			_putchar(i);
	}
	_putchar('\n');
}
