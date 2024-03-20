#include "main.h"
#include <stdarg.h>
/**
 *spec - check if is a correct %
 *@format: valid %
 *Return: pointer to function or NULL
 */

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

/**
 * _print_f - printing function
 * @format: is a valid %
 * @pa: variadic list
 *
 * Return: variable with all information
 */

int _printf_f(const char *format, va_list pa)
{
	unsigned int i = 0, j = 0;
	int (*f)(va_list);

	while (format && format[i])
	{
		if (format[i] != '%')
		{	_putchar(format[i]);
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
				f = spec(&format[i + 1]);
				if (f == NULL)
				{
					j += _putchar('%');
					j += _putchar(format[i + 1]);
					j += _putchar('\n');
					return (j);
				}
				i += 2;
				j += f(pa);
				continue;
			}
		}
		i++;
	}
	return (j);
}
