#include "main.h"
/**
 * print_sign - prints the sign of a number
 * @n: test number
 *
 * Return: returns as follows
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar(43);
		return (1);
	} else if (n < 0)
	{
		_putchar(45);
		return (-1);
	}
	_putchar(48);
	return (0);
}
