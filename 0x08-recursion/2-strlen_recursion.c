#include "main.h"
/**
 * _strlen_recursion - Function that returns length of
 *	of a string recursively
 * @s: String whose length is to be returned
 *
 * Return: Returns the length of @s
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + _strlen_recursion(s + 1));
}
