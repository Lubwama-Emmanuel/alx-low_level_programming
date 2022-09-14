#include "main.h"
/**
 * print_alphabet_x10 - function that prints the alphabet ten times
 * x: letter character
 * i: counter
 *
 */
void print_alphabet_x10(void)
{
	int i = 0;
	char x;

	while (i <= 10)
	{
		x = 'a';
		while (x <= 'z')
		{
			_putchar(x);
			++x;
		}
		_putchar('\n');
		++i;
	}
}
