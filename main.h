#ifndef _HEADER_
#define _HEADER_
#include <stdarg.h>
#include <stdio.h>
/**
 * stuct print - struct %
 * @p: check char
 * @f: the pointer function
 */
typedef struct print
{
	char *p;
	int (*f)(va_list);
} pp;
int _printf(const char *format, ...);
int _putchar(char c);
int printc(va_list c);
int prints(va_list s);
int printd(va_list d);
int printi(va_list i);
void r_int(int a);
int _printf_f(const char *format, va_list pa);
#endif
