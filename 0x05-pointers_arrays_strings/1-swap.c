#include "main.h"
/**
 * swap_int - function that swaps numbers
 * @a: points to a
 * @b: points to b
 *
 * Return: void functions return nothing
 */
void swap_int(int *a, int *b)
{
	int tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}
