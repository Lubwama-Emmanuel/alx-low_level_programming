#include <ctype.h>
/**
 * _isdigit - function that checks for digits
 * @c: digit to checkout
 *
 * Return: returns 1 or 0
 */
int _isdigit(int c)
{
	if (isdigit(c))
	{
		return (1);
	}
	return (0);
}
