#include "main.h"
#include <string.h>
/**
 * puts_half - prints half of the string
 * @str: string to be printed
 *
 * Return: returns nothing
 */
void puts_half(char *str)
{
	long i, len;

	len = (strlen(str) - 1) / 2;
	for (i = len; i <= strlen(str); i++)
	{
		printf("%c", str[i]);
	}
	printf("\n");
}
