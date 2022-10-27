#include "main.h"

/**
  * binary_to_uint - function that converts binary to decimal
  *
  * @b: b is a pointer to a value in the binary number
  * Return: returns the decimal number
  */
unsigned int binary_to_uint(const char *b)
{
	unsigned int j;
	int len, base_two;

	j = 0;

	if (!b)
		return (0);

	for (len = 0; b[len] != '\0'; len++)
		;

	for (len--, base_two = 1; len >= 0; len--, base_two *= 2)
	{
		if (b[len] != '0' && b[len] != '1')
			return (0);
		if (b[len] & 1)
			j += base_two;
	}
	return (j);
}

