#include <stdio.h>
/**
 * _strncpy - copys a given number of characters
 * @dest: destination string
 * @src: source string
 * @n: number of characters to copy
 *
 * Return: returns destination string
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i, j = 0;

	for (i = 0; i < n; i++)
	{
		dest[j] = src[i];
		j++;
	}
	return (dest);
}
