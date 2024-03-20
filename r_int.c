#include "main.h"
/**
 * r_int - print integer aux
 * @a: integer to print
 * Return: void
 */
void r_int(int a)
{
	unsigned int t;

	t = a;
	if (t / 10)
		r_int(t / 10);
	_putchar(t % 10 + '0');
}
