#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

/**
 * isNum - check if string array is num
 * @num: string to check
 *
 * Return: 0 if its a number and 1 if not number
 */
int isNum(char num[])
{
	int i, j = strlen(num);

	for (i = 0; i < j; i++)
	{
		if (!isdigit(num[i]))
			return (1);
	}
	return (0);
}

/**
 * main - a program that adds positive numbers
 *
 * @argc: holds the number of arguments passed
 * @argv: array pointer that holds the argumnets passed
 *
 * Return: always return 0
 */

int main(int argc, char *argv[])
{
	int i, sum;

	if (argc == 1)
		printf("0\n");
	else
	{
		sum = 0;
		for (i = 1; i < argc; i++)
		{
			if (isNum(argv[i]) == 0)
				sum += atoi(argv[i]);
			else
			{
				printf("Error\n");
				return (1);
			}
		}
		printf("%d\n", sum);
	}
	return (0);
}
