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
		if (i % 2 == 0)
			printf("%c", str[i]);
	}
	printf("\n");
}
