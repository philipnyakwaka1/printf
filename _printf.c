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
		{"s", format_s},
		{"R", rot13},
		{NULL, NULL}
	};
	va_start(ap, format);
	if (!format)
	{
		counter = -1;
	}
	else
	{
		counter = _fprintf(spec, format, ap)
	}
	va_end(ap);
	return (counter);
}
