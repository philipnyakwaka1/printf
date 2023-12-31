#include <limits.h>
#include <stdio.h>
#include "main.h"

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
	int len;
	int len2;
	unsigned int ui;
	void *addr;

	ui = (unsigned int)INT_MAX + 1024;
	addr = (void *)0x7ffe637541f0;
	len = _printf("Let's try to printf a simple sentence.\n");
	len2 = printf("Let's try to printf a simple sentence.\n");
	 _printf("Character:[%c]\n", 'H');
	 printf("Character:[%c]\n", 'H');
	 _printf("String:[%s]\n", "I am a string !");
	 printf("String:[%s]\n", "I am a string !");
	 _printf("Length:[%d, %i]\n", len, len);
	 printf("Length:[%d, %i]\n", len, len);
	 _printf("Negative:[%d]\n", -762534);
	 printf("Negative:[%d]\n", -762534);
	 _printf("%d\n", 23);
	 _printf("%s\n", "Phillip is my name");
	_printf("%b\n", 98);
	_printf("%r\n", "This string has been printed in reverse");
	_printf("Unsigned:[%u]\n", ui);
	_printf("Unsigned octal:[%o]\n", ui);
	_printf("Unsigned hexadecimal:[%x, %X]\n", ui, ui);
	 return (0);
}
