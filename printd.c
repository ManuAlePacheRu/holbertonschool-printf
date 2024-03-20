#include "main.h"
#include <stdlib.h>
/**
 *
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

void r_int(int a)
{
	unsigned int t;

	t = a;
	if (t / 10)
		r_int(t / 10);
	_putchar(t % 10 + '0');
}
