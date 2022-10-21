#include "function_pointers.h"
/**
 * print_name - function to print a name
 *
 * @name: name to print
 * @f: function to pointer that doesn't return anything
 *
 * Return: Always 0 sucess
 */
void print_name(char *name, void (*f)(char *))
{
	if (name && f)
		f(name);
}
