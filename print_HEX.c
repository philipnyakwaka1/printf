#include "main.h"
/**
 * print_HEX - prints hexadecimal number
 * @ap: arguments
 * Return: count of numbers printed
 */
int print_HEX(va_list ap)
{
	int *arr, count, i;
	unsigned int n, var;

	count = 0;
	n = va_arg(ap, unsigned int);
	var = n;

	while (n / 16 != 0)
	{
		n = n / 16;
		count = count + 1;
	}
	count++;

	arr = malloc(sizeof(int) * count);
	if (arr == NULL)
		return (-1);
	while (i < count)
	{
		arr[i] = var % 16;
		var = var / 16;
		i++;
	}
	i = count - 1;
	while (i >= 0)
	{
		if (arr[i] > 9)
			arr[i] += 7;
		_putchar(arr[i] + '0');
		i--;
	}
	free(arr);
	return (count);
}
