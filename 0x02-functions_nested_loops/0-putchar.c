#include <stdio.h>
#include <string.h>
#include "main.h"

int main(void)
{
	char str[] = "_putchar";
	int ch;

	for (ch = 0; ch < strlen(str); ++ch)
		_putchar(str[ch]);
	_putchar('\n');

	return (0);
}
