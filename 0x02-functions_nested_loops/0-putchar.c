#include <stdio.h>
#include <string.h>
#include "main.h"
/**
 *main - function
 *@str: character
 *
 *Return: return zero
 */
int main(void)
{
	char str[] = "_putchar";
	int i;

	for (i = 0; i < 8; i++)
		_putchar(str[i]);
	_putchar('\n');
	return (0);
}
