#ifndef MAIN_H
#define MAIN_H
#include <stdarg.h>
#include <stdlib.h>
#include <stdio.h>

int _putchar(char c);
int _printf(const char *format, ...);

/**
 * struct specifier - struct holding specifier
 * @sp: specifier
 * @p: function pointer
 *
 */
typedef struct specifier
{
	char *sp;
	int (*p)(va_list);
} spec_s;
int _fprintf(spec_s spec[],const char * format, va_list ap);
spec_s spec_func(spec_s spec[],char c);
int format_c(va_list ap);
int format_s(va_list ap);
int rot13(va_list ap);
int print_int(va_list ap);
int print_dec(va_list ap);
int print_bin(va_list ap);
int print_srev(va_list ap);
int print_HEX(va_list ap);
int print_hex(va_list ap);
int print_unsigned(va_list ap);
int print_octal(va_list ap);

#endif
