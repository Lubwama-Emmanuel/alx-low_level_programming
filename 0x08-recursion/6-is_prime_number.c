#include "main.h"
/**
 * is_prime - Function that checks is a number is prime
 * @n: integer to compare
 * @c: integer to compare with
 *
 * Return: returns 1 is ist actually prime and 0 if not
 */
int is_prime(int n, int c)
{
	if (n % c == 0)
	{
		if (c == n)
			return (1);
		else
			return (0);
	}
	return (0 + is_prime(n, (c + 1)));
}
/**
 * is_prime_number - functions that takes in an integer and confirm if it works
 * @n: integr to be checked
 *
 * Return: return 1 if its prime and 0 otherwise
 */
int is_prime_number(int n)
{
	if (n == 0)
		return (0);
	else if (n == 1)
		return (0);
	return (is_prime(n, 2));
}
