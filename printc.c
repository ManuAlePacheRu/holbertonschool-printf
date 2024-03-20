#include "main.h"

/**
 * printc - function to print string
 * @c: variadic list
 * Return: 1 al succes
 */

int printc(va_list c)
{
	char ch = (char)va_arg(c, int);

	_putchar(ch);
	return (1);
}
