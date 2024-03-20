#include "main.h"
#include <stdarg.h>
int (*spec(const char *format))(va_list)
{
	int i = 0;
	pp a[] = {
		{"c", printc},
		{"s", prints},
		{"d", printd},
		{"i", printi},
		{NULL, NULL}
	};

	for (; a[i].p != NULL; i++)
	{
		if (*(a[i].p) == *format)
			break;
	}
	return (a[i].f);
}
int _printf(const char *format, ...)
{
	va_list pa;
	unsigned int i = 0, j = 0;

	if (format == NULL)
		return (-1);
	va_start(pa, format);
	while (format && format[i])
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
			if (format[i + 1] == '\0')
				return (-1);
			if (format[i + 1] == '%')
			{
				_putchar('%');
				j++;
				i += 2;
				continue;
			}
			else
			{
				j += p_f(format, pa, i, j);
				continue;
			}
		}
		i++;
	}
	va_end(pa);
	return (j);
}
int p_f(const char *format, va_list pa, int i, int j)
{
	int (*f)(va_list);
	
	f = spec(&format[i + 1]);
	if (f == NULL)
	{
		j += _putchar('%');
		j += _putchar(format[i + 1]);
		return (j);
	}
	i += 2;
	j += f(pa);

	return (j);
}
