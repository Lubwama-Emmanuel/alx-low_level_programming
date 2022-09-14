#include <ctype.h>
#include "main.h"
/**
 * _islower(int c) - function that checks for lowercase
 * c: c is the tested value
 *
 * Return: returns 1 if true and 0 is false
 */
int _islower(int c)
{
	if (islower(c))
		return (1);
	else
		return (0);
}
