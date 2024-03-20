#include "main.h"

/**
 * prints - function to print a string
 * @s: string to print
 * Return: i
 */

int prints(va_list s)
{
	char *str = va_arg(s, char *);
	int i;

	if (str == NULL)
		str = "(null)";
	for (i = 0; str[i] != '\0'; i++)
		_putchar(str[i]);

return (i);
}
