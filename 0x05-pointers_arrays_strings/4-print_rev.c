#include "main.h"
#include <string.h>
/**
 * print_rev - function that prints string in reverse
 * @s: string to be printed
 *
 * Return: void returns nothing
 */
void print_rev(char *s)
{
	int i, len;

	len = strlen(s) - 1;
	for (i = len; i >= 0; i--)
	{
		printf("%c", s[i]);
	}
	printf("\n");
}
