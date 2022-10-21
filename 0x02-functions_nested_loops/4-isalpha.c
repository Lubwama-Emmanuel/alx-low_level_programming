#include <ctype.h>
#include "main.h"
/**
 * _isalpha - checks is the number given is an alphabetical letter
 * @c: the alphabet being tested
 *
 * Return: returns 1 if is true and 0 if not
 *
 */
int _isalpha(int c)
{
	if (isalpha(c))
		return (1);
	else
		return (0);
}
