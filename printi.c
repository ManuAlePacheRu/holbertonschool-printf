#include "main.h"
#include <stdlib.h>

/*
 * printi - A function a integer
 * @i: list of variadic argument
 *
 * Return: lenght
 */

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
		d++;
	}

	while (n > 9)
	{
		n /= 10;
		d++;
	}

	r_int(m);
	return (d);
}
