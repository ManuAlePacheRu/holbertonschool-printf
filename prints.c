#include "main.h"

/**
 *
 */

int prints(va_list s)
{
	char *str = va_arg(s, char *);
	int i;
	for (i = 0; str[i] != '\0'; i++)
		_putchar(str[i]);
	
return (i);
}
