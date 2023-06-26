#include "main.h"

/**
 * format_c - prints character
 * @ap: va_list type
 * Return: characters printed (1)
 */

int format_c(va_list ap)
{
	char c;
	int count;

	count = 0;
	c = va_arg(ap, int);
	count += _putchar(c);
	return (count);
}
