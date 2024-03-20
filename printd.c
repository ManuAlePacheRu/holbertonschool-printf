#include "main.h"
#include <stdlib.h>
/**
 *printd - function to integer
 *@d: variadic function list
 *Return: number of digit to print
 */

int printd(va_list d)
{
	int i = 1, m = 0;
	unsigned int n = 0;

	n = va_arg(d, int);
	m = n;

	if (m < 0)
	{
		_putchar('-');
		m *= -1;
		n = m;
		i++;
	}

	while (n > 9)
	{
		n /= 10;
		i++;
	}

	r_int(m);
	return (i);
}
