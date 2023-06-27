#include "main.h"
/**
 * print_octal - prints octal number
 * @ap: arguments
 * Return: number of octal printed
 */
int print_octal(va_list ap)
{
	int *arr, count, i;
	unsigned int n, var;

	count = 0;
	n = va_arg(ap, unsigned int);
	var = n;

	while (n / 8 != 0)
	{
		n = n / 8;
		count = count + 1;
	}
	count++;

	arr = malloc(sizeof(int) * count);
	if (arr == NULL)
		return (-1);
	while (i < count)
	{
		arr[i] = var % 8;
		var = var / 8;
		i++;
	}
	i = count - 1;
	while (i >= 0)
	{
		_putchar(arr[i] + '0');
		i--;
	}
	free(arr);
	return (count);
}
