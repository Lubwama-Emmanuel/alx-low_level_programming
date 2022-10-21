#include <stdio.h>
/**
 * main - c main fxn
 * ltr: letter
 * Return: main returns zero
 */
int main(void)
{
	char ltr;

	for (ltr = 'z' ; ltr >= 'a' ; ltr--)
		putchar(ltr);
	putchar('\n');
	return (0);
}
