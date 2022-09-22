#include <string.h>
#include <stdio.h>
/**
 * _strcmp - compares two strings
 * @s1: first string
 * @s2: second string to compare to the first
 *
 * Return: returns an int
 */
int _strcmp(char *s1, char *s2)
{
	while (*s1 && (*s1 == *s2))
	{
		s1++;
		s2++;
	}
	return (*(const unsigned char *)s1 - *(const unsigned char *)s2);
}
