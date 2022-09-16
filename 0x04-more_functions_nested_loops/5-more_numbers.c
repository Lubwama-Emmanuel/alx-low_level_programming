#include <stdio.h>
#include "main.h"
/**
 * more_numbers - prints numbers
 *
 */
void more_numbers(void)
{
	int i, j;

	i = 0;
	while (i < 10)
	{
		for (j = 0; j <= 14; j++)
			printf("%d", j);
		putchar('\n');
		++i;
	}
	putchar('\n');
}
