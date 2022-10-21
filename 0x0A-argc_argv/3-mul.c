#include <stdio.h>
#include <stdlib.h>

/**
 * main - fxn that multiplies two integers
 *
 * @argc: number of arguments
 * @argv: arguments
 *
 * Return: return 0
 */
int main(int argc, char *argv[])
{
	if (argc == 3)
	{
		int m;

		m = (atoi(argv[1]) * atoi(argv[2]));
		printf("%d\n", m);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
