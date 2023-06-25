#include <stdio.h>
#include "main.h"

/**
 * spec_func - Retrieves the specifier function
 * @spec: struct containing all specifiers and their respective function
 * @c: specifier character
 * Return: a specifier and its function
 */

spec_s spec_func(spec_s spec[], char c)
{
	int i;

	for (i = 0; spec[i].sp != NULL; i++)
	{
		if (*(spec[i].sp) == c)
		{
			break;
		}
	}
	return (spec[i]);
}
