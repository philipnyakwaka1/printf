#include "main.h"

/**
 * print_bin- prints a binary
 * @ap: va_list type
 * Return: number of bin printed
 */

int print_bin(va_list ap)
{
	int counter, val, i, j, k;
	unsigned int n, m;

	counter = val = i = 0;
	j = 1;
	n = va_arg(ap, unsigned int);

	while (i < 32)
	{
		m = (n & (j << (31 - i)));
		if (m >> (31 - i))
			val = 1;
		if (val)
		{
			k = m >> (31 - i);
			_putchar(k + 48);
			counter++;
		}
		i++;
	}
	if (counter == 0)
	{
		counter++;
		_putchar('0');
	}
	return (counter);
}
