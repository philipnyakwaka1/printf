#include <stdio.h>
#include "main.h"

/**
 * _printf - a function that produces output according to a format
 * @format: is a character string
 *
 * Return: number of characters printed
 * (excluding the null byte used to end output to strings)
 */

int _printf(const char *format, ...)
{
	int counter;
	va_list ap;
	spec_s spec[] = {
		{"c", format_c},
		{"R", rot13},
		{"i", print_int},
		{"d", print_dec},
		{"b", print_bin},
		{"r", print_srev},
		{"s", format_s},
		{"u", print_unsigned},
		{"o", print_octal},
		{"x", print_hex},
		{"X", print_HEX},
		{NULL, NULL}
	};
	if (!format)
	{
		counter = -1;
	}
	else
	{
		va_start(ap, format);
		counter = _fprintf(spec, format, ap);
		va_end(ap);
	}
	return (counter);
}
