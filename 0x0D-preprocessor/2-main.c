#include <stdio.h>
/**
 * main - main fxn
 *
 * Description: program prints the name of the file it
 *	was compiled from.
 *
 * Return: returns zero on success
 */
int main(void)
{
	printf("%s\n", __FILE__);
	return (0);
}
