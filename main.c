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
	 return (0);
}
