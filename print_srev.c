#include "main.h"
/**
 * _strlen - finds string length
 * @s: input string
 * Return: string length
 */
int _strlen(char *s)
{
	int x;

	x = 0;
	while (s[x] != '\0')
	{
		x++;
	}
	return (x);
}
/**
 * print_srev - prints a string in reverse
 * @ap: arguments
 * Return: number of characters printed
 */
int print_srev(va_list ap)
{
	char *str;
	int x, y;

	str = va_arg(ap, char*);
	if (str == NULL)
	{
		str = "(nil)";
		return (-1);
	}
	x = _strlen(str);
	y = x - 1;
	while (y >= 0)
	{
		_putchar(str[y]);
		y--;
	}
	return (x);
}
