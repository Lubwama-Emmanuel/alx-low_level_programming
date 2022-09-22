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

	/*Find size of the array*/
	j = strlen(dest);

	/**
	 * scr doees not need to be null terminated
	 * if it contains n or more characters
	 */
	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[j] = src[i];
		j++;
	}
	/*null terminate dest*/
	dest[j] = '\0';
	return (dest);
}
