#ifndef _VARIADIC_FUNCTIONS_H_
#define _VARIADIC_FUNCTION_H_

#include <stdarg.h>
#include <stdio.h>

void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_char(va_list arg);
void print_int(va_list arg);
void print_float(va_list arg);
void print_string(va_list arg);
void print_all(const char * const format, ...);
int sum_them_all(const unsigned int n, ...);

typedef struct print
{
	char *symbol;
	void (*print_func)(va_list arg);
} func_printer;
#endif
