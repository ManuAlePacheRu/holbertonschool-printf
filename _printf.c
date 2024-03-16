#include "main.h"
#include <stdio.h>

int (*spec(const char *format))(va_list)
{
	int i;
	pp p[] = {
		{"c", printc},
		{"s", prints},
		{NULL, NULL}
	};
	
	for (i = 0; p[i].p != NULL; i++)
	{
		if (*(p[i].p) == *format)
			break;
	}
	return (p[i].f);
}

int _printf(const char *format, ...)
{
	va_list pa;
	unsigned int i = 0, j = 0;
	int (*f)(va_list);

	va_start(pa, format);
	while (format[i])
	{
		if (format[i] != '%')
		{
			_putchar(format[i]);
			j++;
			i++;
			continue;
		}
		else
		{
			if (format[i + 1] == '%')
			{
				_putchar('%');
				j++;
				i += 2;
				continue;
			}
			else
			{
				f = spec(&format[i + 1]);
				i += 2;
				j += f(pa);
				continue;
			}
		}

		i++;
	}
	va_end(pa);
	_putchar('\n');
	return (0);
}
