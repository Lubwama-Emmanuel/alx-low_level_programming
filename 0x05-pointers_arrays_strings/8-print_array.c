#include <stdio.h>
/**
 * print_array - print an array
 * @n: number to be printed
 * @a: array
 *
 * Return: returns nothing
 */
void print_array(int *a, int n)
{
	int i, len;

	len = (int)(sizeof(a) / sizeof(a[0]));
	for (i = (len - n); i < len; i++)
	{
		printf("%d", a[i]);
		printf(",");
		printf(" ");
	}
	printf("\n");
}
