#include "main.h"
/**
 * evaluate_sqrt - evaluate function sqrt
 * @i: integer
 * @n: integer
 *
 * Return: evaluate sqrt
 */
int evaluate_sqrt(int i, int n)
{
	if (n == 0 || n == 1)
		return (n);
	else if (i * i < n)
		return (evaluate_sqrt(i + 1, n));
	else if (i * i == n)
		return (i);
	return (-1);
	return (-1);
}
/**
 * _sqrt_recursion - evaluate sqrt
 * @n: integer
 *
 * Return: Sqrt_recursion
 */
int _sqrt_recursion(int n)
{
	int i = 0;

	return (evaluate_sqrt(i, n));
}
