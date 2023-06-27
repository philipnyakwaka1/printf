#include <stdio.h>
#include "main.h"

/**
 * _fprintf - produces output according to a format
 * @spec: stuct of specifiers
 * @format: string
 * @ap: variable arguments
 * Return: characters printed
 */
int _fprintf(spec_s spec[], const char *format, va_list ap)
{
	int i, j;
	int counter;
	spec_s slice[1];

	counter = 0;
	for (i = 0; format[i] != '\0'; i++)
	{
		if (format[i] != '%')
		{
			counter += _putchar(format[i]);
			continue;
		}
		slice[0] = spec_func(spec, format[i + 1]);
		if (slice[0].sp != NULL)
		{
			j = slice[0].p(ap);
			if (j == -1)
			{
				return (j);
			}
			counter += j;
		}
		if (slice[0].sp == NULL && format[i + 1] == ' ')
		{
			if (format[i + 1] != '\0')
			{
				_putchar(format[i]);
				_putchar(format[i + 1]);
				counter = counter + 2;
			}
			else
				return (-1);
		}
		i++;
	}
	return (counter);
}
