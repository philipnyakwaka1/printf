#include "main.h"

/**
 * format_c - prints character
 * @ap: va_list type
 * Return: characters printed (1)
 */

int format_c(va_list ap)
{
	char c;

	c = va_arg(ap, int);
	return (_putchar(c));
}
