#include "main.h"
#include <stdlib.h>

int printi(va_list i)
{
	int d = 1, m = 0;
	unsigned int n = 0;

	n = va_arg(i, int);
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
	return (d);
}