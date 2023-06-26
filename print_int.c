#include "main.h"

/**
 * print_int- prints a number
 * @ap: va_list type
 * Return: number of integers printed
 */

int print_int(va_list ap)
{
	int n, counter, rem, number, val, fig;

	n = va_arg(ap, int);
	rem = n % 10;
	counter = 1;
	val = 1;
	n /= 10;
	number = n;

	if (rem < 0)
	{
		_putchar('-');
		number = -number;
		n = -n;
		rem = -rem;
		counter = counter + 1;
	}
	if (number > 0)
	{
		do {
			val *= 10;
			number /= 10;
		} while (number / 10 != 0);
		number = n;
		do {
			fig = number / val;
			_putchar(fig + '0');
			number -= (fig * val);
			val /= 10;
			counter++;
		} while (val > 0);
	}
	_putchar(rem + '0');
	return (counter);
}
