#include "main.h"

void r_int(int a)
{
	unsigned int t;

	t = a;
	if (t / 10)
		r_int(t / 10);
	_putchar(t % 10 + '0');
}
