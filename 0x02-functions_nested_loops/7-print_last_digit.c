#include "main.h"
/**
 * print_last_digit - fxn prints last digit
 * @n: the number to work on
 *
 * Return: returns the number
 */
int print_last_digit(int n)
{
	int r;

	if (n < 0)
		r = -1 * (n % 10);
	else
		r = n % 10;
	_putchar(r + '0');
	return (r);
}
