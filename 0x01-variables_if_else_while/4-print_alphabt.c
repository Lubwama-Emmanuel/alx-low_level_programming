#include <stdio.h>
/**
 * main - main fxn
 * ltr: letters
 * Return: main fxn returns zero
 */
int main(void)
{
	char ltr;

	for (ltr = 'a'; ltr <= 'z'; ltr++)
	{
		if (ltr != 'e' && ltr != 'q')
			putchar(ltr);
	}
	putchar('\n');
	return (0);
}
