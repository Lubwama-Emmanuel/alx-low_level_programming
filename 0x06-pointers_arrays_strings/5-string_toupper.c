#include <stdio.h>
/**
 * string_toupper - function that changes lowercase
 *	letters to uppercase using
 *	ASNCII
 *
 * @s: The string to change case
 *
 * Return: return the uppercase
 */
char *string_toupper(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		if (s[i] >= 97 && s[i] <= 122)
			s[i] = s[i] - 32;
		++i;
	}
	return (s);
}
