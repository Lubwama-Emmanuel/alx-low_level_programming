#include "main.h"
#include <ctype.h>
/**
 * _isupper - function that is a letter is capital
 * @c: letter to test
 *
 * Return: returns 1 or 0
 *
 */
int _isupper(int c)
{
	if (isupper(c))
	{
		return (1);
	}
	return (0);
}
