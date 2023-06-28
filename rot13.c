#include "main.h"

/**
 * rot13 - offsets aphabets by 13 places
 * @ap: va_list type
 * Return: number of characters printed
 */

int rot13(va_list ap)
{
	int i, j, counter;
	char str[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char src[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";
	char *s;

	s = va_arg(ap, char *);
	counter = 0;
	for (i = 0; s[i] != '\0'; i++)
	{
		if ((s[i] >= 65 && s[i] <= 90) || (s[i] >= 97 && s[i] <= 122))
		{
			for (j = 0; str[j] != '\0'; j++)
			{
				if (str[j] == s[i])
				{
					counter += _putchar(src[j]);
					break;
				}
			}
		}
		else
			counter += _putchar(s[i]);
	}
	return (counter);
}
