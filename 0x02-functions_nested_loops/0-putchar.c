#include <stdio.h>
#include <string.h>
#include "main.h"
/**
 * main - main fxn 
 * str: character
 *
 * Return: return zero
 */
int main(void)
{
	char str[] = "_putchar";
	int ch;

	for (ch = 0; ch <= 8; ch++)
		_putchar(str[ch]);
	_putchar('\n');

	return (0);
}
