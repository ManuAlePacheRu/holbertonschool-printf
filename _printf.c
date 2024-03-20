#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * _printf - function for format printing
 * @format: list of arguments to printing
 * Return: charecter printing
 */
int _printf(const char *format, ...)
{
	va_list pa;
	int p = 0;

	if (format == NULL)
	{
		return (-1);
	}

	va_start(pa, format);

	p = _printf_f(format, pa);
	va_end(pa);
	return (p);
}
