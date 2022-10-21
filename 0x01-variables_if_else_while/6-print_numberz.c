#include <stdio.h>
/**
 * main - c main fxn
 * num: number
 * Return: main returns zero
 */
int main(void)
{
	int num;

	for (num = 0 ; num < 10 ; num++)
		putchar(num % 10 + '0');
	putchar('\n');
	return (0);
}
