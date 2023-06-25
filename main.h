#ifndef MAIN_H
#define MAIN_H
#include <stdio.h>
#include <stdarg.h>
/
int _putchar(char c);
int _printf(const char *format, ...);
typedef struct specifier
{
	char *sp;
	int (*p)(va_list);
} spec_s;
int _fprintf(spec_s spec[],const char * format, va_list ap);
spec_s spec_func(spec_s spec[],char c);
#endif
