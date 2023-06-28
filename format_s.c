#include "main.h"

/**
 * format_s - prints string
 * @ap: va_list type
 * Return: number of characters printed
 */

int format_s(va_list ap)
{
	int  i, counter;
	char *s;

	counter = 0;
	s = va_arg(ap, char *);
	if (!s)
		s = "(null)";
	for (i = 0; s[i] != '\0'; i++)
	{
		counter += _putchar(s[i]);
	}
	return (counter);
}
