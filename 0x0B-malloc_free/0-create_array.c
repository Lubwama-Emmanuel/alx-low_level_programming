#include "main.h"
/**
 * create_array - fxn to creat an array of characters
 * @c: character to fill array
 * @size: size of the array
 *
 * Return: s(created array)
 */
char *create_array(unsigned int size, char c)
{
	char *s;
	unsigned int i = 0;

	if (size == 0)
		return (NULL);
	s = malloc(size * sizeof(char));

	if (s == 0)
		return (NULL);
	while (i < size)
	{
		s[i] = c;
		++i;
	}
	return (s);
}
