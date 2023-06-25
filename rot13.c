#include "main.h"

/**
 * rot13 - offsets aphabets by 13 places
 * @ap: va_list type
 * Return: number of characters printed
 */

int rot13(va_list ap)
{
	int i, counter;
	char *str;

	counter = 0;
	str = va_arg(ap, char *);
	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] >= 65 && str[i] <= 90)
		{
			if (str[i] < 78)
			{
				counter += _putchar(str[i] + 13);
			}
			else
			{
				counter += _putchar(str[i] - 13);
			}
		}
		else if (str[i] >= 97 && str[i] <= 122)
		{
			if (str[i] < 110)
			{
				counter += _putchar(str[i] + 13);
			}
			else
			{
				counter += _putchar(str[i] - 13);
			}
		}
		else
		{
		counter += _putchar(str[i]);
		}
		i++;
	}
	return (counter);
}
