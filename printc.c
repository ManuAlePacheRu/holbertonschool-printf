#include "main.h"

/**
 *
 */

int printc(va_list c)
{
	char ch = (char)va_arg(c, int);
	_putchar(ch);
	return (0);
}
