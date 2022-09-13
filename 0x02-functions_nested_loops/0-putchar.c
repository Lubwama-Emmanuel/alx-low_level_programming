#include <stdio.h>
#include "main.h"
/**
 * main - main function
 *
 * Return: Returns zero
 */
int main(void)
{
	char str[] = "_putchar";
	int i;

	for (i = 0; i <= strlen(str); i++)
		_putchar(str[i]);
	_putchar('\n');
	return (0);
}
