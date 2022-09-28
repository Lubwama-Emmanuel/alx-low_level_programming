#include "main.h"
#include <string.h>
/**
 * _print_rev_recursion - Prints string in reverse
 * @s: String to be reversed
 *
 * Return: Void returns nothing
 */
void _print_rev_recursion(char *s)
{
	int i;

	for (i = strlen(s); i >= 0; i--)
		printf("%c", s[i]);
}
