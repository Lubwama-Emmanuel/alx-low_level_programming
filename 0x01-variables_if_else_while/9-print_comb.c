#include <stdio.h>
/**
 * main - c main fxn
 * num: numnbers
 * Return: main returns zero
 */
int main(void)
{
	int num;

	for (num = 0; num < 10; num++)
	{
		putchar(num % 10 + '0');
		if (num != 9)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
