#include "main.h"
#include <stdarg.h>

int (*spec(const char *format))(va_list)
{
	int i = 0;
	pp a[] = {
		{"c", printc},
		{"s", prints},
		{"d", printd},
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
	int (*f)(va_list);

	if (format == NULL)
	{
		return (-1);
	}
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
				{
					return (-1);
				}
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
					if (f == NULL)
					{
						_putchar('%');
						_putchar(format[i + 1]);
						return (0);
					}
					i += 2;
					j += f(pa);
					continue;

			}
		}

		i++;
	}
	va_end(pa);
	return (j);
}
