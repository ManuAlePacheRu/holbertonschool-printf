#ifndef _HEADER_
#define _HEADER_
#include <stdarg.h>
typedef struct print
{
	char*p;
	int (*f)(va_list);
}pp;
int _printf(const char *format, ...);
int _putchar(char c);
int printc(va_list c);
int prints(va_list s);
#endif 
