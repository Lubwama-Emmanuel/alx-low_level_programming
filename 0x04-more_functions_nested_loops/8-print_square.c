#include "main.h"
/**
 * print_square - prints a square
 * @size: size of the square to be printed
 *
 */
void print_square(int size)
{
	char hash = '#';
	int i = 0, j;

	while (i < size)
	{
		j = 0;
		while (j < size)
		{
			printf("%c", hash);
			++j;
		}
		printf("%c", hash);
		printf("\n");
		++i;
	}
}

