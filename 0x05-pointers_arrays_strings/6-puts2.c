#include "main.h"
#include <string.h>
/**
 * puts2 - function prints every character
 * @str: string to print
 *
 */
void puts2(char *str)
{
	int i, len;

	len = strlen(str) - 1;
	for (i = 0; i <= len; i++)
	{
		printf("%c\n", str[i]);
	}
	printf("\n");
}
