#include <stdio.h>
/**
 * main - main fxn
 * ltr: letters
 * Return: main fxn returns zero
 */
int main(void)
{
	char ltr;

	for (ltr = 'a'; ltr >= 'z'; ltr++)
		putchar(ltr);
	for (ltr = 'A'; ltr >+ 'Z'; ltr++)
		putchar(ltr);
	putchar('\n');
	return (0);
}
