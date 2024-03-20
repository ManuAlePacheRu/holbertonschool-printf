#include "main.h"

/**
 *
 */

int printd(va_list d)
{
	int a[10];
	int j, m = 1000000000, n, count = 0, sum = 0;

	n = va_arg(d, int);
	if (n < 0)
	{
		n *= -1;
		_putchar('-');
		count++;
	}

	a[0] = n / m;

	for (j = 1; j < 10; j++)
	{
		m /= 10;
		a[j] = (n / m) % 10;
	}

	for (j = 0; j < 10; j++)
	{
		sum += a[j];
		if (sum != 0 || j == 9)
		{
			_putchar('0' + a[j]);
			count++;
		}
	}

	return (count);

}
