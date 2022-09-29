#include "main.h"
/**
 * _pow_recursion - Function that returns value of x
 *	raised to power of y recursively
 * @x: integer to be raisen
 * @y: integer to power @x
 *
 * Return: Returns result
	 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	else if (y == 1)
		return (x);
	return (x * _pow_recursion(x, (y - 1)));
}
