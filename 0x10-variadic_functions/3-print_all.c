#include "variadic_functions.h"

/**
 * print_char - print a char
 *
 * @arg: a list of argument pointing
 *	to the character to be printed
 *
 * Return: nothing
 */

void print_char(va_list arg)
{
	char c = va_arg(arg, int);

	printf("%c", c);
}

/**
 * print_float - print an integer
 *
 * @arg: a list of arguments pointing
 *	to the character to be printed
 *
 * Return: nothing
 */

void print_float(va_list arg)
{
	float n = va_arg(arg, double);

	printf("%f", n);
}

/**
 * print_string - print a string
 *
 * @arg: a list of argument pointing
 *	to the character to be printed
 *
 * Return: nothing
 */

void print_string(va_list arg)
{
	char *str = va_arg(arg, char *);

	if (str == NULL)
	{
		printf("(nill)");
		return;
	}
	printf("%s", str);
}

/**
 * print_all - a function that prints anything
 *
 * @format: a string of the character representing the
 *	argument types
 *
 * Description: if any argument not of type vhar,
 *	int, float, or char * is ignored
 *
 * Return: nothing
 */

void print_all(const char * const format, ...)
{
	va_list ap;
	int i = 0, j = 0;
	char *separator = "";
	func_printer funcs[] = {
		{"c", print_char},
		{"i", print_int},
		{"f", print_float},
		{"s", print_string}
	};

	va_start(ap, format);

	while (format && format[i])
	{
		j = 0;
		while (j < 4 && (format[i] != *(funcs[j].symbol)))
			j++;
		if (j < 4)
		{
			printf("%s", separator);
			funcs[j].print_func(ap);
			separator = ", ";
		}
		i++;
	}
	printf("\n");

	va_end(ap);
}
