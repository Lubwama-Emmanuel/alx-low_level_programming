#include <stdio.h>
/**
 * main - main fxn
 *
 * @argc: counter
 * @argv: arguments
 *
 * Return: 0(success exit)
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
		printf("%s\n", argv[i]);

	return (0);
}
