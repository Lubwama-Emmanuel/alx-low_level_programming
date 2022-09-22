#include <string.h>
#include <stdio.h>
/**
 * _strncat - concats strings with a given number
 * @dest: destination string
 * @src: source string
 * @n: number of characters to copy from the src
 *
 * Return: return the destination string
 */
char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	j = strlen(dest);
	for (i = 0; i < n; i++)
	{
		dest[j] = src[i];
		j++;
	}
	dest[j] = '\0';
	return (dest);
}
