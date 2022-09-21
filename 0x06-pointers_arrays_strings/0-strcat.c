#include <stdio.h>
#include <string.h>
#include "main.h"
/**
 * _strcat - function concatinates two strings
 * @dest: destination string
 * @src: source string
 *
 * Return: returns concatinated string
 */
char *_strcat(char *dest, char *src)
{
	int i, j;

	j = strlen(dest);

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[j] = src[i];
		j++;
	}
	dest[j] = '\0';
	return (dest);
}
