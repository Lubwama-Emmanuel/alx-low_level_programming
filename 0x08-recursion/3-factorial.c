#include "main.h"
/**
 * factorial - Function that computes the factorial of an integer
 * @n: Integer whose factorial is to be computed
 *
 * Return: Returns the factorial
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 1)
	{
		return (1);
	}
	return (n * factorial(n - 1));
}
