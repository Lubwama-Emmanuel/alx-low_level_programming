#include <stdio.h>
/**
 * _strcpy - copys the string from src to dest
 *	including the terminating null byte (\0)
 * @src: source of string to be copied
 * @dest: destination of the string
 *
 * Return: pointer to dest parameter
 */
char *_strcpy(char *dest, char *src)
{
	int a, b = 0;

	for (a = 0; src[a] != '\0'; a++)
	{
		dest[b] = src[a];
		b++;
	}
	dest[b] = '\0';

	return (dest);
}
