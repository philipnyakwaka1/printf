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
	int i;
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
		i++;
		slice[0] = spec_func(spec, format[i]);
		if (slice[0].sp != NULL)
		{
			counter += slice[0].p(ap);
		}
		if (slice[0].sp == NULL)
		{
		}
	}
	return (counter);
}
